class Solution {
public:
    int minimumSum(int num) {
        string s=to_string(num);
        int n=s.size();
        int i=0;
        sort(s.begin(),s.end());

        string num1,num2;

        for(int j=0;j<n;j+=2){
            num1+=s[j];
        }
        
        for(int k=1;k<n;k+=2){
            num2+=s[k];
        }

        int num3=stoi(num1);
        int num4=stoi(num2);

        return num3+num4;
    }
};