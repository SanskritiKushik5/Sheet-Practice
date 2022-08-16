class Solution {
public:
    int dist(vector<int> v1, vector<int> v2){
        return pow(v2[0]-v1[0], 2)+pow(v2[1]-v1[1], 2);
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        unordered_map<int, int> map;
        map[dist(p1, p2)]++;
        map[dist(p1, p3)]++;
        map[dist(p1, p4)]++;
        map[dist(p2, p3)]++;
        map[dist(p2, p4)]++;
        map[dist(p3, p4)]++;
        for(auto x:map){
            if(x.first == 0) return false;
        }
        if(map.size()==2)
            return true;
        return false;
    }
};
