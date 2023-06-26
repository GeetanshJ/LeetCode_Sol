class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int min = INT_MAX;

        for(int i = 0;i < nums.size() - 1; i++){
            if(min > nums[i+1] - nums[i]){
                min = nums[i+1] - nums[i];
            }
        }

        return min;
    }

};