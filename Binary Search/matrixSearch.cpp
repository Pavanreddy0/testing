int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int m, n;
    m = (int)A.size();
    if(m == 0) return 0;
    n = (int)A[0].size();
    m = 0; n -= 1;
    while(m < (int)A.size() && n >= 0)
    {
        if(A[m][n] == B) return 1;
        else if(A[m][n] > B) n -= 1;
        else m += 1;
    }
    return 0;
}

