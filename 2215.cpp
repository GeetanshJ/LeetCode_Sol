#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> res(2);
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());

        for (int i : set1) {
            if (set2.find(i) == set2.end()) {
                res[0].push_back(i);
            }
        }

        for (int i : set2) {
            if (set1.find(i) == set1.end()) {
                res[1].push_back(i);
            }
        }

        return res;
    }
};
