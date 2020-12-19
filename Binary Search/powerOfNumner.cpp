int pow(int x, int n, int d) {
    if(x == 0 && n == 0)
    {
        if(d != 1) return 1;
        return 0;
    }
    if(x == 0) return 0;
    if(x < 0) x += d;
    if(n == 0) return 1;
    if(x == 1 || n == 1) return x;
    long long int t = (1LL * pow(x, n / 2, d)) % d;
    t = (t * t) % d;
    if(n & 1) t = (t * x) % d;
    return (int)t;
}
