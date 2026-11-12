class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int lenInc=1;
        int lenDec=1;

        int ans=0;

        int n=nums.size();

        for(int i=0;i<n-1;i++){
            if(nums[i]<nums[i+1]){
                lenInc++;
                ans=max(lenInc,ans);
            }
            else{
                lenInc=1;
            }
        }

        for(int j=0;j<n-1;j++){
            if(nums[j]>nums[j+1]){
                lenDec++;
                ans=max(ans,lenDec);
            }
            else{
                lenDec=1;
            }
        }
        ans=max(ans,lenInc);
        ans=max(ans,lenDec);
        return ans;
    }
};