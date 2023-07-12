class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size() == 1){
            return nums[0];
        }

        sort(nums.begin(),nums.end());

       for(int i = 0;i < nums.size() - 2;i++){
            if(nums[i] == nums[i+1] && nums[i] == nums[i+2]){
                nums[i] = 1000;
                nums[i+1] = 1000;
                nums[i+2] = 1000;
            }
        }


        for(int i = 0;i < nums.size();i++){
            if(nums[i] != 1000){
                return nums[i];
            }
        }

       return 0;
    }
};