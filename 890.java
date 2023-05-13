class Solution {

    boolean Is_true(String s,String pattern){
        HashMap<Character,Character>  map = new HashMap<>();
        
        for(int i = 0;i < s.length(); i++){

            if(map.containsKey(pattern.charAt(i))){
                if(s.charAt(i) != map.get(pattern.charAt(i)) ){
                    return false;
                }
            } 

            map.put(pattern.charAt(i),s.charAt(i));
        }

        for(int i = 0;i < s.length()-1; i++){
            for(int j = i + 1; j < s.length();j++){
                if(pattern.charAt(i) != pattern.charAt(j)){
                    if(map.get(pattern.charAt(i)) == map.get(pattern.charAt(j))){
                        return false;
                    }
                }
            }
        }

    return true;

    }

    public List<String> findAndReplacePattern(String[] words, String pattern) {

        List<String> ans = new ArrayList<>();
        
        for(int i = 0;i < words.length; i++){
            if(Is_true(words[i],pattern)){
                ans.add(words[i]);
            }
            
        }

        return ans;
    }
}