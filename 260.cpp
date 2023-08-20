class Solution {
    public int[] singleNumber(int[] nums) {

        int[] arr = new int[2] ; 
        Arrays.sort(nums);

        for(int i = 0;i < nums.length - 1; i++){
            if(nums[i] == nums[i + 1]){
                nums[i] = Integer.MAX_VALUE;
                nums[i + 1] = Integer.MAX_VALUE;
            }
        }

        Arrays.sort(nums);

        arr[0] = nums[0];
        arr[1] = nums[1];

        return arr;
    }
}