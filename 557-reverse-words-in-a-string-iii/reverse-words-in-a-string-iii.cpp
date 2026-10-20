class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();

        if(n==0) return "";

        int prefix=0, suffix=0, save=0;

        for(int i=0;i<n;i++){
            if(s[i]==' '){
                suffix=i-1;
                save=i+1;
            }
            while(prefix<suffix){
                swap(s[prefix],s[suffix]);
                prefix++,suffix--;
            }
            prefix=save;
        }

        suffix=n-1;
        while(prefix<suffix){
            swap(s[prefix],s[suffix]);
            prefix++,suffix--;
        }

        return s;
    }
};