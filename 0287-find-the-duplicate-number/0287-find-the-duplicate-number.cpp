class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        for(auto x:nums){
            int t=abs(x);
            if(nums[t]<0)return t;
            nums[t]= -nums[t];
        }
        return n;
    }
};