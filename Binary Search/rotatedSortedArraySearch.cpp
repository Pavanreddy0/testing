int searchInRotatedSortedArray(vector<int>& nums, int target) {
    int n = (int)nums.size(), low, high, mid;
    low = 0; high = n- 1;
    while(low <= high)
    {
        mid = low + ((high - low) >> 1);
        if(nums[mid] == target)
            return mid;
        
        else if(nums[low] <= nums[mid])
        {
            if(nums[low] <= target && target < nums[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        else
        {
            if(nums[high] >= target && target > nums[mid])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return -1;
}
