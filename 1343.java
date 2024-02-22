class Solution {
    public int numOfSubarrays(int[] arr, int k, int threshold) {
        int cnt = 0, sum = 0;
        for (int i = 0; i <= arr.length - k; i++) {
            for (int j = i; j < k + i; j++) {
                sum += arr[j];
            }

            sum /= k;

            if (sum >= threshold) {
                cnt++;
            }

            sum = 0;
        }

        return cnt;
    }
}
