class Solution {
    public boolean isCircularSentence(String sentence) {
        int len = sentence.length();

        int space = 0; 

        for(int i = 0;i < len; i++){
            if(sentence.charAt(i)==' ' && sentence.charAt(i-1)!=sentence.charAt(i+1)){
                return false;
            }
        }
        
        for(int i = 0;i < len; i++){
            if(sentence.charAt(i) == ' '){
                space++;
            }

            if(space == 0 && sentence.charAt(i) == sentence.charAt(len - 1)){
                return true;
            }

            else{
                return false;
            }
        }

        

        return true;
    }
}