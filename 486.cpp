class Solution {
public:
    bool maxDiff(vector<int>& nums, int left, int right, int n) {
        int Left_sum = 0,Right_sum = 0;

        if(left == right && Left_sum > Right_sum) {
            return true;
        }
        
        else if(left == right && Left_sum <= Right_sum) {
            return false;
        }

        if(nums[left] >= nums[right]){
            Left_sum += nums[left];
            maxDiff(nums,left+1,right,n);
        }

        else if(nums[left] < nums[right]){
            Right_sum += nums[right];
            maxDiff(nums,left,right-1,n);
        }
        
        return max(Left_sum,Right_sum);
    }

    bool PredictTheWinner(vector<int>& nums) {
        int n = nums.size();
        
        return maxDiff(nums, 0, n - 1, n) ;
    }
};

