class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.find(needle)){
            return haystack.find(needle);
        }
        return 0;
    }
};