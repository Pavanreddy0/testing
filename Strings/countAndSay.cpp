string countAndSay(int n) {
    if(n == 0) return "";
    if(n == 1) return "1";
    string ans = "1", res = "";
    n -= 1;
    int i, t, size;
    char temp;
    while(n--)
    {
        size = (int)ans.size();
        t = 1;
        i = 1;
        temp = ans[0];
        while(i < size)
        {
            if(ans[i] == temp)
            {
                t += 1;
            }
            else
            {
                res += t + '0';
                res += temp;
                temp = ans[i];
                t = 1;
            }
            i += 1;
        }
        res += t + '0';
        res += temp;
        ans = res;
        res = "";
    }
    return ans;
}
