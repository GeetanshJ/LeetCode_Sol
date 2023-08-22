class Solution {
public:
    int findComplement(int num) {
        if(num == 2){
            return 1;
        }

        vector<int> binaryNum;
 
        while (num > 0) {
            binaryNum.push_back(num % 2);
            num = num / 2;
        }

        reverse(binaryNum.begin(),binaryNum.end());

        for(int i = 0;i < binaryNum.size(); i++){
            if(binaryNum[i] == 1){
                binaryNum[i] = 0;
            }

            else if(binaryNum[i] == 0){
                binaryNum[i] = 1;
            }
        }

        int ans = 0;

        for(int i = 0;i < binaryNum.size(); i++){
            ans += pow(2,i) * binaryNum[binaryNum.size() - 1 - i];
        }

        return ans;
    }
};