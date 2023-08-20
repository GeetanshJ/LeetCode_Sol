class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int cnt = 0,low = -1,high = -1;

        if(nums.size() == 1 && target == nums[0]){
            return vector<int>{0,0};
        }

        for(int i = 0;i < nums.size(); i++){
            if(nums[i] == target && cnt == 0){
                low = i;
                cnt++;
            }

            else if(nums[i] != target && cnt >= 1){
                high = i - 1;
                break;
            }

            if(nums[i] == target && i == nums.size() - 1){
                high = i;
            }

            else if(high == low && low >= 0){
                return vector<int>{low,low};
            }
        }

        return vector<int>{low,high};
    }
};