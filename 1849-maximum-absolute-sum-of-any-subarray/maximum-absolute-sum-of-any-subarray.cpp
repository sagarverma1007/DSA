class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {

        int minSum=0;
        int maxSum=0;

        int currentMax=0;
        int currentMin=0;

        for(int x:nums){

            currentMax=max(currentMax+x , x);
            maxSum=max(maxSum,currentMax);

            currentMin=min(currentMin+x , x);
            minSum=min(minSum,currentMin);
        }

        return max(maxSum, abs(minSum));
    }
};