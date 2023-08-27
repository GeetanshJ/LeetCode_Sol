class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        
        
        int cntL = 0,cntR=0,cnt_ = 0;
        for(int i = 0;i < moves.length(); i++){
            if(moves[i] == 'R'){
                cntR++;
            }
            
            else if(moves[i] == 'L'){
                cntL++;
            }
            
            else{
               cnt_++; 
            }
        }
        
        if(cntL >= cntR){
            return abs(cntL + cnt_ - cntR);
        }
        
        return abs(cntL-cntR-cnt_);
    }
};