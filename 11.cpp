class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0,right = height.size() - 1,max = 0,area = 1;

        while(left <= right){
            if(height[left] <= height[right]){
                area = height[left]*(right - left);
                left++;
            }

            else if(height[left] > height[right]){
                area = height[right]*(right - left);
                right--;
            }

            if(area > max){
                max = area;
                area = 1;
            }

        }

        return max ;
    }
};