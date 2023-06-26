class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt = 1,max = 0;

        for(int i = 0;i < nums.size() - 1 ; i++){
            int d = nums[i+1] - nums[i];
            for(int j = 0;j < nums.size() - 1; j++){
                if(nums[j+1] - nums[j] == d && nums[j+1] != nums[i]){
                    cnt++;
                }
            }

            if(max <= cnt){
                max = cnt;
                cnt = 1;
            }

            cnt = 1;
        }

        return max;
    }
};