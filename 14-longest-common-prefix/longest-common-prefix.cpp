class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix=strs[0];
        int j=0;
        for(int i=1;i<strs.size();i++){
        while(j<strs[i].size() && j<prefix.size() && prefix[j]==strs[i][j]){
            j++;
        }
        prefix=prefix.substr(0,j);

        j=0;
        }
        return prefix;
    }
};