class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> ans;
        ans.push_back(1);
        ans.push_back(n);
        for(int i=2; i <= n/2; i++) {
          if (n % i == 0)
              ans.push_back(i);
       }
        sort(ans.begin(), ans.end());
        if(ans.size()<k)
            return -1;
        else
            return ans[k-1];
    }
};
