#include <vector>
#include <algorithm>

class Solution {
public:
    int maxOperations(std::vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        
        int cnt = 0;
        int left = 0, right = nums.size() - 1;

        while (left < right) {
            int sum = nums[left] + nums[right];

            if (sum == k) {
                cnt++;
                left++;
                right--;
            } 

            else if (sum < k) {
                left++;
            } 
            
            else {
                right--;  
            }
        }

        return cnt;
    }
};
