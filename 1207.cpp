#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> map;
        set<int> occurrences;

        for (int i : arr) {
            map[i]++;
        }

        for (auto it : map) {
            if (occurrences.find(it.second) != occurrences.end()) {
                return false;
            }
            
            occurrences.insert(it.second);
        }

        return true;
    }
};
