class Solution {
    public boolean wordPattern(String pattern, String s) {
    HashMap<Character,String> map = new HashMap<Character,String>();
    s += ' ';
    String[] str = s.split(" ");

    if(str.length != pattern.length()){
        return false;
    }

    for(int i = 0;i < pattern.length(); i++){
        if(map.containsKey(pattern.charAt(i))){
            if(!(map.get(pattern.charAt(i)).equals(str[i]))){
                return false;
            }
        }

        map.put(pattern.charAt(i),str[i]);
    }

    for(int i = 0;i < pattern.length()-1; i++){
        for(int j = i + 1;j < pattern.length(); j++){
            if(pattern.charAt(i) != pattern.charAt(j)){
                if((map.get(pattern.charAt(i)).equals(map.get(pattern.charAt(j)))) ){
                    return false;
                }
            }
        }  
    }

    return true;

    }
}