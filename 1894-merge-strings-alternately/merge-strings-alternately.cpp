class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s="";
        int q=0;

        while(q<word1.size() && q<word2.size()){
            s.push_back(word1[q]);
            s.push_back(word2[q]);
            q++;
        }
        while(q<word1.size()){
            s.push_back(word1[q]);
            q++;
        }

        while(q<word2.size()){
            s.push_back(word2[q]);
            q++;
        }

        return s;
    }
};