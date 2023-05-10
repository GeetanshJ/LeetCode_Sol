class Solution {
    public int lengthOfLastWord(String s) {
        char[] arr = s.toCharArray();
        int count = 0,check = 0;

        for(int i = arr.length - 1;i >= 0; i--){
            if(arr[i] == ' ' && check == 0){
                continue;
            }

            else if((arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= 'A' && arr[i] <= 'Z')){
                count++;
                check++;
            }
            
            else{
                break;
            }

        }

        return count;
    }
}