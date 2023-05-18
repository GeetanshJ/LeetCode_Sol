class Solution {

    boolean isPalindrome(String s){
        int left = 0,right = s.length()-1;

        while(left <= right){
            if(s.charAt(left) == s.charAt(right)){
                left++;
                right--;
            }
            else{
                return false;
            }
        }
        return true;
    }

    public int countSubstrings(String s) {
        
        int count = 1;
        for(int i = 0;i < s.length() - 1; i++){
            String str = "";
            for(int j = i;j < s.length(); j++){
                str += s.charAt(j);
                if(isPalindrome(str)){
                    count++;
                }
            }
        }

        return count;
    }
}