class Solution {
public:

    unordered_set<string> ans;

    void solve(string &s,int index,int left,int right,int balance, string current) {

        if (index==s.size()) {
            if (left==0 && right==0 && balance==0) {
                ans.insert(current);
            }
            return;
        }

        char ch=s[index];

        if (ch=='(' && left>0) {
            solve(s,index+1,left-1,right,balance, current);
        }

        if (ch==')' && right>0) {
            solve(s, index+1,left,right-1,balance,current);
        }

        if (ch=='(') {
            solve(s,index+1,left,right,balance+1,current+ch);
        }
        else if(ch==')') {

            if(balance>0) {
                solve(s,index+1,left,right,balance-1,current+ch);
            }
        }
        else {
            solve(s,index+1,left,right,balance,current+ch);
        }
    }


    vector<string> removeInvalidParentheses(string s) {

        int left=0;
        int right=0;

        for(char ch:s) {
            if(ch=='(') {
                left++;
            }
            else if(ch==')') {
                if(left>0)
                    left--;
                else
                    right++;
            }
        }

        solve(s,0,left,right,0,"");

        return vector<string>(ans.begin(), ans.end());
    }
};