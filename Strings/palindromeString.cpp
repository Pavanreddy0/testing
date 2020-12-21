int isPalindrome1(string A) {
    if(A.size() <= 1) return 1;
    int i, j;
    for(i = 0; i < (int)A.size(); i++)
        if(A[i] >= 'A' && A[i] <= 'Z')
            A[i] += 32;
    i = 0; j = (int)A.size() - 1;
    
    while(i <= j)
    {
        while(i <= j && !((A[i] >= 'a' && A[i] <= 'z') || (A[i] >= '0' && A[i] <= '9')))
            i += 1;
        while(i <= j && !((A[j] >= 'a' && A[j] <= 'z') || (A[j] >= '0' && A[j] <= '9')))
            j -= 1;
        if(i <= j && A[i] != A[j]) return 0;
        i += 1;
        j -= 1;
    }
    return 1;
}
