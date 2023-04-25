class Solution {
    public boolean isPowerOfTwo(int n) {
        var val = 1073741824; // 2^30 i.e. biggest power of 2

        return n > 0 && val % n == 0;
    }
}