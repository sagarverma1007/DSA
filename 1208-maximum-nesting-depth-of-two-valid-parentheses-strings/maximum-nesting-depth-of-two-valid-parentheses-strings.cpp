class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int>ans;
        int count=0;

        for(int ch:seq){
            if(ch=='('){
                ans.push_back(count%2);
                count++;
            }
            else{
                count--;
                ans.push_back(count%2);
            }
        }
        return ans;
    }
};