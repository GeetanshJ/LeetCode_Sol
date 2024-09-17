class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        if(flowerbed.size() <= 1){
            if(n == 1){
                if(flowerbed[0] == 0) return true;
                if(flowerbed[0] == 1) return false;
            }

            if(n == 0){
                return true;
            }
        }

        for(int i = 0;i < flowerbed.size(); i++){
            if(n <= 0) return true;

            if(i == 0 && flowerbed[i+1] == 0 && flowerbed[i] == 0){
                flowerbed[i] = 1;
                n--;
            }

            if(i == flowerbed.size() - 1 && flowerbed[i-1] == 0 && flowerbed[i] == 0){
                flowerbed[i] = 1;
                n--;
            }

            if(i >= 1 && i < flowerbed.size() - 1 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0 && flowerbed[i] == 0){
                flowerbed[i] = 1;
                n--;
            }
        } 


        return n == 0;
    }
};