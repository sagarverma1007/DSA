class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        st.push(0);
        int score;

        for(char c:s) {

            if(c=='(') {
                st.push(0);
            }
            else{
                int x = st.top();
                st.pop();
                
                if (x==0)
                    score = 1;         //()
                else
                    score=2*x;      //(A)

                st.top()+=score;
            }
        }

        return st.top();
    }
};