class Solution {
public:
    
    float slope(vector<int> a, vector<int>b){
        if(a[0]==b[0]) return INT_MAX;
        return ((b[1]-a[1])/float(b[0]-a[0]));
    }

    int maxPoints(vector<vector<int>>& points) {
        int n = points.size();
        int ans = INT_MIN;
        if(n<=2) return n;
        for(int i=0; i<n; i++){
            unordered_map<float,int> mp;
            for(int j=i+1; j<n; j++){
                float sl = slope(points[i],points[j]);
                mp[sl]++;
                ans = max(ans,mp[sl]+1);
            }
        }
        return ans;
    }
};
