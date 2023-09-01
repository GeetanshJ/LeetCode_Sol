class Solution {
public:
    vector<int> countBits(int n) {
        
        if(n == 0){
            return vector<int> {0};
        }

        
        vector<int> res;
        vector<int> bits;

        res.push_back(0);
        res.push_back(1);
        int cnt = 0;

        for(int i = 2;i <= n ; i++){
            int k = i;
            while(k > 0){
                bits.push_back(k % 2);
                k /= 2;
            }

            for(int j = 0;j < bits.size(); j++){
                if(bits[j] == 1){
                    cnt++;
                }
            }

            res.push_back(cnt);
            cnt = 0;
            bits.clear();
        }

        return res;
    }
};