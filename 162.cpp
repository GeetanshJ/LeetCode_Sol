class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int max = nums[0],index = 0;

        for(int i = 1;i < nums.size(); i++){
            if(max < nums[i]){
                max = nums[i];
                index = i;
            }
        }

        return index;
    }
};