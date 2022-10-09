class Solution {
public:
   int maxSubArray(vector<int>& nums) {
       
        int maxsum=-10e4 ,cursum=0;
        for(int i=0;i<nums.size();i++){
         cursum += nums[i];
            if(cursum>maxsum){
                maxsum=cursum;
            }
            if(cursum<0){
                cursum=0;
            }
        }
       return maxsum;
    }
};
