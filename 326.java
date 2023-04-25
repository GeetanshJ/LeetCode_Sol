class Solution {
    public boolean isPowerOfThree(int n) {
    int val = 1162261467;
    return n  > 0 && val % n == 0; 
    }
}