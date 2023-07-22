class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> arr;

        for(int i = 1;i <= n;i++){
            if(n % i == 0){
                arr.push_back(i);
            }
        }

        return (k > arr.size() || k < 0) ? -1 : arr[k-1];
    }
};