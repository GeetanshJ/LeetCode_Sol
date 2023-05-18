class Solution {
    public int countAsterisks(String s) {
        int a=0,cnt=0;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='*'&&a==0){
                cnt++;
            }
            else if(s.charAt(i)=='|'){
                a++;
                if(a==2){
                    a=0;
                }
            }
        }
        return cnt;
    }
}