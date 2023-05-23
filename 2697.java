class Solution {
    public String makeSmallestPalindrome(String s) {
         char[] charArray = s.toCharArray();
        int left = 0;
        int right = charArray.length - 1;
        String str = "";

        while (left <= right) {
            if (charArray[left] < charArray[right]) {
                charArray[right] = charArray[left];
            }
            
            if (charArray[left] > charArray[right]) {
                charArray[left] = charArray[right];
            }
            
            
            left++;
            right--;
        }
        
        for(int i = 0;i < charArray.length; i++){
            str += charArray[i];
        }

        return str;
    
    }
}