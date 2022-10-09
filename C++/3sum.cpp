class Solution {
public:
  vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        if(nums.size()<3){
            return ans;
        }
        sort(nums.begin(),nums.end());
        int a=0;
        int low,hi;
        while(nums[a]<=0){
            low=a+1;
            hi=nums.size()-1;
            while(low<hi &&a< nums.size() - 2){
                if((nums[a]+nums[low]+nums[hi])==0){
                    vector<int> v;
                    v.push_back(nums[a]);
                     v.push_back(nums[low]);
                     v.push_back(nums[hi]);
                    ans.push_back(v);
                    while((v[1]==nums[low]) && low < hi){
                        low++;
                        
                    }
                     while(v[2]==nums[hi] && hi > a){
                        hi--;
                    }
                }
                else if(nums[low]+nums[hi]<(-nums[a])){
                    low++;
                }
                else{
                    hi--;
                }
            }
            int s=nums[a];
            while(s==nums[a] && a < nums.size() - 2){
                a++;
            }
              if(a==nums.size()-2){
                    return ans;
                }
        }
        return ans;
}
};
