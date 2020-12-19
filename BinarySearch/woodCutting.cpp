int woodCutting(vector<int> &A, int B) {
    /*
     There is given an integer array A of size N denoting the heights of N trees.

     Lumberjack Ojas needs to chop down B metres of wood. It is an easy job for him since he has a nifty new woodcutting machine that can take down forests like wildfire. However, Ojas is only allowed to cut a single row of trees.

     Ojas's machine works as follows: Ojas sets a height parameter H (in metres), and the machine raises a giant sawblade to that height and cuts off all tree parts higher than H (of course, trees not higher than H meters remain intact). Ojas then takes the parts that were cut off. For example, if the tree row contains trees with heights of 20, 15, 10, and 17 metres, and Ojas raises his sawblade to 15 metres, the remaining tree heights after cutting will be 15, 15, 10, and 15 metres, respectively, while Ojas will take 5 metres off the first tree and 2 metres off the fourth tree (7 metres of wood in total).

     Ojas is ecologically minded, so he doesn't want to cut off more wood than necessary. That's why he wants to set his sawblade as high as possible. Help Ojas find the maximum integer height of the sawblade that still allows him to cut off at least B metres of wood.
     */
    long long int ans = 0, i;
    long long int n = (int)A.size(), low = A[0], high = A[0], mid, temp = 0;
    for(int i = 0; i < n; i++)
    {
        low = min(low, 1LL * A[i]);
        high = max(high, 1LL * A[i]);
    }
    ans = 0;
    while(low <= high)
    {
        mid = low + ((high - low) >> 1);
        temp = 0;
        for(i = 0; i < n; i++)
        {
            if(A[i] > mid)
                temp += A[i] - mid;
        }
        if(temp >= B)
        {
            if(ans < mid) ans = mid;
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return (int)ans;
}
