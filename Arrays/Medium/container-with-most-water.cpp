class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n = arr.size();
        int area = INT_MIN;
        int water_max = 0;
        int l = 0;
        int r = n-1;
        
        while(l<r){
            area = max(water_max, min(arr[r], arr[l])*(r-l));
            water_max = max(water_max, area);
            if(arr[l]<arr[r])
                l++;
            else
                r--;
        }
        
        return water_max;
    }
};
