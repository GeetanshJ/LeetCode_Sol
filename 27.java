class Solution {
    public int removeElement(int[] nums, int val) {
        int count = 0;
        for(int i = 0;i < nums.length;i++){
            if(nums[i] == val){
                nums[i] = Integer.MAX_VALUE;

            }
        }

        for(int i = 0;i < nums.length;i++){
            if(nums[i] != Integer.MAX_VALUE){
                count++;
            }
        }

        Arrays.sort(nums);
        return count;
    }
}