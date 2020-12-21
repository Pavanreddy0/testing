#define MOD 1000000007
bool isVowel(char c)
{
    if(c == 'a' || c == 'e' ||c == 'i' ||c == 'o' ||c == 'u')
        return 1;
    return 0;
}
int Solution::solve(string A) {
    long long ans = 0;
    int n = (int)A.size(), i;
    if(n <= 1) return 0;
    vector<int> vowels(n, 0), cons(n, 0);
    if(isVowel(A[n - 1])) vowels[n - 1] = 1;
    else cons[n - 1] = 1;
    for(i = n - 2; i >= 0; i--)
    {
        if(isVowel(A[i])) vowels[i] += 1;
        else cons[i] += 1;
        vowels[i] += vowels[i + 1];
        cons[i] += cons[i + 1];
    }
    for(i = 0; i + 1 < n; i++)
    {
        if(isVowel(A[i])) ans += cons[i + 1];
        else ans += vowels[i + 1];
    }
    return (int)(ans % MOD);
}
