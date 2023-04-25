import java.util.*;
class Solution {
    public int removeDuplicates(int[] nums) {
        int count = 0;
        for(int i = 0; i < nums.length-1; i++){
            for(int j = i + 1; j < nums.length ; j++){
                if(nums[i] == nums[j]){
                    nums[j] = Integer.MAX_VALUE;
                }
            }
        }




        for(int i = 0; i < nums.length; i++){
            if(nums[i] != Integer.MAX_VALUE){
                count++;
            }
        }

        Arrays.sort(nums);
        return count;
    }
}