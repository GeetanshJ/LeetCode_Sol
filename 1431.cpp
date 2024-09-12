class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> arr;
        int maxi = *max_element(candies.begin(),candies.end());

        for(int i = 0;i < candies.size(); i++){
            bool isFind = false;
            if(extraCandies + candies[i] >= maxi){
                isFind = true;
                arr.push_back(true);
            }

            if(!isFind) arr.push_back(false);
        }

        return arr;
    }
};