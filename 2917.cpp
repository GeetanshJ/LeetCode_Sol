class Solution {
public:
    void CntBit(vector<int>& nums,vector<int>& ans,int i,int x){
        if(i == x){
            return ;
        }

        int cnt = 0;
        for(int j = 0;j < nums.size(); j++){
            int x = pow(2,i);
            if((nums[j] & x) == pow(2,i)){
                cnt++;
            }
        }
        

        ans.push_back(cnt);
        CntBit(nums,ans,i+1,x);

    }


    int findKOr(vector<int>& nums, int k) {
        vector<int>cnt = nums;
        int x = 0;
        sort(cnt.begin(),cnt.end());
        int n = cnt[cnt.size() - 1];
        while(n){
            x++;
            n>>=1;
        }

        if(k == 1){
            int cnt = nums[0];
            for(int i = 1;i < nums.size(); i++){
                cnt = cnt | nums[i];
            }  
            return cnt;    
        }


        else if(k == nums.size()){
            int cnt = nums[0];
            for(int i = 1;i < nums.size(); i++){
                cnt = cnt & nums[i];
            }  
            return cnt;
        }


        else{

            int cnt = 0;
            vector<int> ans;
            CntBit(nums,ans,0,x);

            for(int i = 0;i < ans.size(); i++){
                if(ans[i] >= k){
                    cnt += pow(2,i);
                }
            }

            return cnt;
        }

        return -1;
    }
};