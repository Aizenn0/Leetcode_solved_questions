class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0; i<n-2; i++){
            if(nums[i]==nums[i+1]){
                i=i+2;
            }
            else return nums[i];
        }
        return nums[n-1];
    }
};