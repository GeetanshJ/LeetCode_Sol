class Solution {
    public boolean hasAlternatingBits(int n) {
        String str = Integer.toBinaryString(n);

        for(int i = 0;i < str.length(); i++){
            if(i < str.length() - 1 && str.charAt(i) == str.charAt(i + 1)){
                return false;
            }
        }
        return true;
    }
}