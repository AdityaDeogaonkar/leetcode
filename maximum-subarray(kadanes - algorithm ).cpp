// ADITYA DEOGAONKAR //

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = 0;
        int cursum = 0;
        
        for(int i=0;i<nums.size();i++) {
            cursum = cursum+nums[i];
            
            if(cursum>max) {
                max= cursum;
            }
            if(cursum<0){
                cursum = 0;
            }
        }
        return max;
    }
};
