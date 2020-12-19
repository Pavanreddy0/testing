int Solution::solve(vector<int> &A, int B) {
    int n = (int)A.size(), low, high, mid;
    if(n == 0) return 0;
    low = 0; high = mid - 1;
    while(low <= high)
    {
        mid = low + ((high - low) >> 1);
        if(A[mid] > B) high = mid - 1;
        else low = mid + 1;
    }
    return low;
}

