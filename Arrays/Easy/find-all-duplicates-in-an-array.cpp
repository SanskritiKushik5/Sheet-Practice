class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> map;
        vector<int> ans;
        for(auto i:nums)
            map[i]++;
        for(auto x:map){
            if(x.second == 2)
                ans.push_back(x.first);
        }
        return ans;
    }
};
