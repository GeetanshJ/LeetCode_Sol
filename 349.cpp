class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;

        for(int i = 0;i < nums1.size(); i++){
            for(int j = i + 1;j < nums1.size(); j++){
                if(nums1[i] == nums1[j]){
                    nums1[j] = INT_MAX;
                }
            }
        }

        for(int i = 0;i < nums1.size(); i++){
            for(int j = 0;j < nums2.size(); j++){
                if(i != INT_MAX && nums1[i] == nums2[j]){
                    ans.push_back(nums1[i]);
                    nums1[i] = INT_MAX;
                }
            }
        }

        return ans;
    }
};