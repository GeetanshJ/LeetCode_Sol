class Solution {
public:
    bool increasing_(vector<int>& nums){
        for (int i = 0; i < nums.size() - 1; i++)
            if (nums[i] > nums[i+1]) {
                return false;
            }

        return true;
    }

    bool decreasing_(vector<int>& nums){
        for (int i = 0; i < nums.size() - 1; i++)
            if (nums[i] < nums[i+1]) {
                return false;
            }

        return true;
    }


    bool isMonotonic(vector<int>& nums) {
        return increasing_(nums) || decreasing_(nums);
    }
};