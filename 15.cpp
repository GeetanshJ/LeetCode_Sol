class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> current;
        sort(nums.begin(), nums.end());
        
        findThreeSum(nums, 0, 0, current, ans);
        
        return ans;
    }
    
    void findThreeSum(vector<int>& nums, int start, int target, vector<int>& current,       vector<vector<int>>& ans) {
        if (current.size() == 3 && target == 0) {
            ans.push_back(current);
            return;
        }
        
        if (current.size() == 3 || start >= nums.size()) {
            return;
        }
        
        for (int i = start; i < nums.size(); i++) {
            if (i > start && nums[i] == nums[i - 1]) {
                continue; 
            }
            
            current.push_back(nums[i]);
            findThreeSum(nums, i + 1, target - nums[i], current, ans);
            current.pop_back();
        }
    }
};
