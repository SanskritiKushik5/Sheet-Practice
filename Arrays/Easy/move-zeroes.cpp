class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = n-1;
        if(n>1){
            while(i<=j){
                if(i>0 && nums[i-1]==0){
                    --i;
                    for(int k=i; k<j; k++){
                        nums[k] = nums[k+1];
                        nums[k+1] = 0;
                    }
                    --j;
                } else if(nums[i]==0){
                    for(int k=i; k<j; k++){
                        nums[k] = nums[k+1];
                        nums[k+1] = 0;
                    }
                    --j;
                }
                ++i;
            }
        }
        
    }
};
