class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;

        if(digits.size() == 1 && digits[0] == 9){
            return vector<int> {1,0};
        }

        if(digits.size() == 1 && digits[0] != 9){
            return vector<int> {digits[0] + 1};
        }

        for(int i = digits.size() - 1;i >= 0; i--){
            //end
            if(digits[i] != 9 && i == digits.size() - 1){
                ans.push_back(digits[i] + 1);
            }

            else if(digits[i] == 9 && i == digits.size() - 1){
                ans.push_back(0);
                digits[i-1] += 1;
            }


            //mid
            else if(digits[i] == 10 && i != 0){
                ans.push_back(0);
                digits[i-1] += 1;
            }

            else if(digits[i] != 10 && i != 0){
                ans.push_back(digits[i]);
            }


            //start
            else if(digits[i] == 10 && i == 0){
                ans.push_back(0);
                ans.push_back(1);
            }

            else{
                ans.push_back(digits[i]);
            }
        }

        reverse(ans.begin(),ans.end());
        return ans;

    }
};