class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int size = nums1.length + nums2.length;
        double sum = 0;
        int[] res = new int[size];

        for(int i = 0;i < nums1.length; i++){
            res[i] = nums1[i];
        }

        for(int i = 0;i < nums2.length; i++){
            res[nums1.length + i] = nums2[i];
        }

        Arrays.sort(res);

        for(int i = 0;i < size; i++){
            System.out.print(res[i]);
        }

        if(size % 2 != 0){
            sum =  res[(size)/2];
        }

        else if(size % 2 == 0){
            sum = (double) ( res[(size)/2] + res[(size/2) - 1] )/2;
        }
        return sum;
    }
}