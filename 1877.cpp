class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int maxi = 0;

        for(int i = 0;i < nums.size()/2; i++){
            maxi = max(maxi,nums[i]+nums[nums.size() - i - 1]);
        }

        return maxi;
    }
};