class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        vector<vector<string>> ans;
        
        for(int i=0; i<strs.size(); i++){
            string s = strs[i];
            sort(s.begin(), s.end());
            if(map.find(s)!=map.end())
                map[s].push_back(strs[i]);
            else
                map[s] = vector<string>{strs[i]};
        }
        for(auto x:map)
            ans.push_back(x.second);
        return ans;
    }
};
