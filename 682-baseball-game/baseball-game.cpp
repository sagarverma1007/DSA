class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n=operations.size();
        vector<int> arr;
        int sum=0;


        for(int i=0;i<n;i++){
            if(operations[i]=="+"){
                int sz=arr.size();
                arr.push_back(arr[sz-1] + arr[sz-2]);
            }

            else if(operations[i]=="D"){
                arr.push_back(arr.back()*2);
            }

            else if(operations[i]=="C"){
                arr.pop_back();
            }

            else{
                arr.push_back(stoi(operations[i]));
            }
        }

        int m=arr.size();

        for(int i=0;i<m;i++){
            sum+=arr[i];
        }

        return sum;
    }
};