class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n=word.size();

        // if(n==0);
        // return "";

        int prefix=0, suffix=0;

        for(int i=0;i<n;i++){
            if(word[i]==ch) 
            break;
            
            suffix++;
        }

        if(suffix==n) 
        return word;


        while(prefix<suffix){
            swap(word[prefix],word[suffix]);
            prefix++,suffix--;
        }

        return word;
    }
};