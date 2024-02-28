class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> left;
        vector<int> right;
        vector<int> ans;

        if (nums.size() < 2) 
            return {0}; 

        int leftsum = nums[0]; 
        left.push_back(0); 
        for(int i = 1; i < nums.size(); i++){ 
            left.push_back(leftsum);
            leftsum += nums[i];
        }

        reverse(nums.begin(), nums.end());

        int rightsum = nums[0]; 
        right.push_back(0); 
        for(int i = 1; i < nums.size(); i++){
            right.push_back(rightsum);
            rightsum += nums[i];
        }


        for(int i = 0; i < left.size(); i++){
            ans.push_back(abs(right[left.size()-1-i] - left[i]));
        }

        return ans;
    }
};   
