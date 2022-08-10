/* Selection Sort */
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i, j, pass, minindex;
        int n = nums.size();
        for (pass=0; pass<n-1; pass++)
        {
            minindex = pass;
            for (i=pass+1; i<=n-1; i++)
            {
                if (nums[i] < nums[minindex])
                    minindex = i;
            }
            if (pass != minindex)
            {
                j = nums[pass];
                nums[pass] = nums[minindex];
                nums[minindex] = j;
            }
        }
    }
};
