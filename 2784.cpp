class Solution {
public:
    bool isGood(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        if(nums.size() > 3){
            for(int i = 0;i < nums.size() - 2; i++){
                if(nums[i+1] - nums[i] != 1){
                    return false;
                }
            }
        }

        int sum = 0,sum_num = 0;
        
        for(int i = 1;i < nums.size();i++){
            sum += i;
        }
        
        for(int i = 0;i < nums.size() - 1;i++){
            sum_num += nums[i];
        }
        
        
       if(sum == sum_num && nums[nums.size()-1] == nums.size() - 1) return true;
        
        else return false;
    }
};