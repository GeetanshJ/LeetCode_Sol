class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int mini = nums[0], cnt = 0;
        for(int it: nums){
            if(it-mini > k){
                cnt++;  mini = it;
            }
        }
        return cnt+1;
    }
};