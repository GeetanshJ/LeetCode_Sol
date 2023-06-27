class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;

        for(int i = 0;i < timePoints.size(); i++){
            int hrs =  stoi(timePoints[i].substr(0,2));

            if(hrs == 0){
                hrs = 24;
            }

            int mins = stoi(timePoints[i].substr(3,5)); 

            int res = 60*hrs + mins;
            minutes.push_back(res);
        }

        
        sort(minutes.begin(),minutes.end());
        int mini = INT_MAX;

        for(int i = 0;i < minutes.size() - 1; i++){
            int diff = minutes[i+1] - minutes[i];
            mini = min(mini,diff); 
        }

        return mini;
    }
};