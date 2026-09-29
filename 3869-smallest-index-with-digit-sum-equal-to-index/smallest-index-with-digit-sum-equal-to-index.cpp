class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int d=0;
        int sum=0;
        int result=-1;
        for(int i=0;i<nums.size();i++){
            while(nums[i]){
                d=nums[i]%10;
                sum+=d;
                nums[i]=nums[i]/10;
            }
            if(sum==i){
                result=i;
                return result;
            }
            sum=0;
            d=0;
        }
        return result;
    }
};