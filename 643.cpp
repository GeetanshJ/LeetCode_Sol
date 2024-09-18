class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double tempSum = 0;
        for (int i = 0; i < k; i++) {
            tempSum += nums[i];
        }

        double maxSum = tempSum;

        for (int i = k; i < nums.size(); i++) {
            tempSum += nums[i] - nums[i - k];

            maxSum = max(maxSum, tempSum);
        }

        return maxSum / k;
    }
};
