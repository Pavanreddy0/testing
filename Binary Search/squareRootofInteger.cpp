/*
 Given an integar A.

 Compute and return the square root of A.

 If A is not a perfect square, return floor(sqrt(A)).
 */
int sqrt(int A) {
    if(A <= 1) return A;
    int low = 1, high = A >> 1, mid, ans = -1;
    while(low <= high)
    {
        mid = low + ((high - low) >> 1);
        if(mid * mid == A) return mid;
        else if(mid * mid < A)
        {
            ans = mid;
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return ans;
}
