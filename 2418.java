class Solution {
    public String[] sortPeople(String[] names, int[] heights) {
        //HashMap<Integer,String> map=new HashMap<Integer,String>();  
        int temp = 0;
        String temp1 = " ";
        for(int i = 0;i < heights.length - 1; i++){
            for(int j = i + 1; j < heights.length; j++){
                if(heights[i] > heights[j]){

                    temp = heights[i];
                    heights[i] = heights[j];
                    heights[j] = temp;

                    temp1 = names[i];
                    names[i] = names[j];
                    names[j] = temp1;
                }
            }
                
        }

    String[] ans = new String[names.length];
    int x = 0;
    
    for(int i = names.length - 1; i >= 0; i--){
        ans[x] = names[i]; 
        x++;
    }
        
        return ans;
    }
}