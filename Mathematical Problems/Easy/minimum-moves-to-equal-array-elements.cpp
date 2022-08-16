class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        int m = *min_element(nums.begin(), nums.end());
        for(auto x:nums)
            ans += x - m;
        return ans;
    }
};
