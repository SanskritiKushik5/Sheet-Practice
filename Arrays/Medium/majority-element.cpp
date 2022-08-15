class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> map;
        int n = nums.size()/2;
        
        for(auto x:nums)
            map[x]++;
        for(auto x:map){
            if(x.second>n)
                return x.first;
        }
        return 0;
    }
};
