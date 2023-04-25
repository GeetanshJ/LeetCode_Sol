class Solution {
    public int majorityElement(int[] nums) {
        int count = 0;
        int len = nums.length;
        Arrays.sort(nums);
        for(int i = 0; i < len-1; i++){
            for(int j = i + 1;j < i + 2; j++){
                if(nums[i] == nums[j]){
                    count++;
                }
                
                else{
                    count = 0;
                }
            }
                           
            if(count >= len/2){
                return nums[i];
            }

        }
        return len;
    }
}