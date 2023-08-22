class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int index = 0,cnt = 0;
        vector<int> ans;

        while(index < nums.size()){

            int left = 0,right = nums.size() - 1;

            while(left < index){
                if(nums[left] < nums[index]){
                    cnt++;
                }

                left++;
            }

            while(right > index){
                if(nums[right] < nums[index]){
                    cnt++;
                }

                right--;
            }

            ans.push_back(cnt);
            cnt = 0;
            index++;
        }

        return ans;
    }
};