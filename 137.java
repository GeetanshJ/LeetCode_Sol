class Solution {
    public int singleNumber(int[] nums) {
        Arrays.sort(nums);
        for(int i = 0;i < nums.length - 2;i++){
            if(nums[i] == nums[i+1] && nums[i] == nums[i+2]){
                nums[i] = 1000;
                nums[i+1] = 1000;
                nums[i+2] = 1000;
            }
        }


        for(int i = 0;i < nums.length;i++){
            if(nums[i] != 1000){
                return nums[i];
            }
        }
        return 0;
    }
}