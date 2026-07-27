class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int a=-1,b=-1;
        for(int i=0; i<n; i++){
            if(nums[i]>=a){
                b=a;
                a=nums[i];
            }
            if(nums[i]<a && nums[i]>=b)b=nums[i];
        }
        return (long long)(a-1)*(b-1);
    }
};