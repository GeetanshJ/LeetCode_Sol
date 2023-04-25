class Solution {
    public boolean checkRecord(String s) {
        int absent = 0,late = 1;

        for(int i = 0;i < s.length();i++){
           
            if(s.charAt(i) == 'A'){
                absent++;
            }
            else if(s.charAt(i) == 'L' && i < s.length() - 1 && s.charAt(i) == s.charAt(i+1)){
                late++;
                if(late == 3){
                    return false;
                }
            }

            else if(s.charAt(i) == 'L' && i < s.length() - 1 && s.charAt(i) != s.charAt(i+1)){
                late=1;
            }

        }

        if(absent < 2 && late < 3 ){
            return true;
        }
        else{
            return false;
        }
    }
}