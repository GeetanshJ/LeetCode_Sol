class Solution {
public:

    bool isPossible(vector<int>& weights,int days,int sol){
        int currSum = 0;
        int cnt = 1;

        for(int i = 0;i < weights.size(); i++){
            if(weights[i] > sol){
                return false;
            }
            
            if(currSum + weights[i] > sol){
                cnt++;
                currSum = weights[i];

                if(cnt > days){
                    return false;
                }
            }

            else{
                currSum += weights[i];
            }
        }

        return true;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int start = 0;
        int ans = -1;
        int end = 0;

        for(int i = 0;i < weights.size(); i++){
            end += weights[i];
        }


        while(start <= end){
            int mid = (start+end)/2;

            if(isPossible(weights,days,mid)){
                ans = mid;
                end = mid - 1;
            }

            else{
                start = mid + 1;
            }
        }

        return ans;
    }
};