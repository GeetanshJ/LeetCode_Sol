class Solution {
    public String replaceDigits(String s) {

        for (int i = 0; i < s.length(); i++) {
            if (i % 2 == 1) {
                s.charAt(i) = (char) (s.charAt(i - 1) + (s.charAt(i) - '0'));
            } 
        }

        return s;
    }
}