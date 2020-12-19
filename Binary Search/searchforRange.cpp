/*
 Given a sorted array of integers A(0 based index) of size N, find the starting and ending position of a given integar B in array A.

 Your algorithm’s runtime complexity must be in the order of O(log n).

 Return an array of size 2, such that first element = starting position of B in A and second element = ending position of B in A, if B is not found in A return [-1, -1].
 */
vector<int> searchRange(const vector<int> &A, int B) {
    vector<int> ans = {-1, -1};
    int n = (int)A.size(), low, high, mid;
    low = 0; high = n - 1;
    while(low <= high)
    {
        mid = low + ((high - low) >> 1);
        if(A[mid] >= B) high = mid - 1;
        else low = mid + 1;
    }
    if(low < 0 || low >= n || A[low] != B) return ans;
    ans[0] = low;
    high = n - 1;
    while(low <= high)
    {
        mid = low + ((high - low) >> 1);
        if(A[mid] <= B) low = mid + 1;
        else high = mid - 1;
    }
    ans[1] = high;
    return ans;
}
