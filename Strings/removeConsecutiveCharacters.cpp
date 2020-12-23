string solve(string A, int B) {
    int n = (int)A.size(), i, j;
    if(n == 0) return A;
    string ans = "";
    i = 0;
    j = 0;
    while(j < n)
    {
        while(j < n && A[i] == A[j]) j += 1;
        if(j <= n && j - i != B) ans += A.substr(i, j - i);
        i = j;
    }
    return ans;
}
