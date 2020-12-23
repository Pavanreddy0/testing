string longestCommonPrefix(vector<string>& strs) {
    int i, n = (int)strs.size(), j, k;
    if(n == 0) return "";
    if(n == 1) return strs[0];
    if(strs[0] == "") return "";
    string ans;
    char t;
    i = 0; j = 0;k = 0;
    while(1)
    {
        if(k >= (int)strs[0].size()) return ans;
        j = k; i = 1;
        t = strs[0][j];
        while(i < n)
        {
            if(t != strs[i][j]) return ans;
            i += 1;
        }
        k += 1;
        ans += t;
    }
    return ans;
}

