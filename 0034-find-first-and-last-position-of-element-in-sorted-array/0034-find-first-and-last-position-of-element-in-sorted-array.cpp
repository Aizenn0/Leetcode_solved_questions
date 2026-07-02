class Solution {
public:
    int lowerbound(vector<int>& nums, int target){
        int l=0, r=nums.size();
        while(l<r){
            int m= l+(r-l)/2; // do not write (l+r)/2 because of integer overflow
            if(nums[m]>=target)r=m;
            else l=m+1;
        }
        return l;
    }
    int upperbound(vector<int>& nums, int target){
        int l=0, r=nums.size();
        while(l<r){
            int m= l+(r-l)/2;
            if(nums[m]>target)r=m;
            else l=m+1;
        }
        return r;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int lb= lowerbound(nums,target);
        int ub= upperbound(nums,target);
        if(lb==nums.size()||nums[lb]!=target)return{-1,-1};
        return{lb,ub-1};
    }
};