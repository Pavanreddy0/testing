/*
Given a sorted array A and a target value B, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You may assume no duplicates in the array.
*/

int searchInsertIB(vector<int> &A, int B) {
    int n = (int)A.size(), low, high, mid;
    if(n == 0) return 0;
    low = 0; high = n - 1;
    while(low <= high)
    {
        mid = low + ((high - low) >> 1);
        if(A[mid] == B) return mid;
        else if(A[mid] > B) high = mid - 1;
        else low = mid + 1;
    }
    return low;
}

