int findMedian1(vector<vector<int> > &A) {
    int m, n, ans;
    ans = 0; m = (int)A.size();
    if(m == 0) return 0;
    n = (int)A[0].size();
    int low, high, mid, less, more, equal, i, j;
    low = A[0][0]; high = low;
    less = 0; more  = 0; equal = 0;
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            low = min(low, A[i][j]);
            high = max(high, A[i][j]);
        }
    }
    while(low <= high)
    {
        less = 0; more  = 0; equal = 0;
        mid = low + ((high - low) >> 1);
        for(i = 0; i < m; i++)
        {
            for(j = 0; j < n; j++)
            {
                if(A[i][j] < mid) less += 1;
                else if(A[i][j] > mid) more += 1;
                else equal += 1;
            }
        }
        if(equal > 0)
        {
            if(less == more) return mid;
            if(less < more && less + equal >= more) return mid;
            if(less > more && more + equal >= less) return mid;
        }
        if(less < more) low = mid + 1;
        else high = mid - 1;
    }
    return 0;
}
