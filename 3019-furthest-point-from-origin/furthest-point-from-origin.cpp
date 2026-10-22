class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l=0 ,r=0, q=0;

        for(int move : moves){
            if(move=='L'){
                l++;
            }

            else if(move=='R'){
                r++;
            }

            else
            q++;
        }

        return abs(l-r)+q;
        
    }
};