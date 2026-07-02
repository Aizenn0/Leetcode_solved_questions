class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        int x=0;
        for(int num:nums){
            x^=num;
        }
        unsigned int bit= (unsigned int)x & -(unsigned int)x;
        int a=0,b=0;
        for(int i=0; i<n; i++){
            if((bit & nums[i])==0) a^=nums[i];
            else b^=nums[i];
        }
        return {a,b};
    }
};