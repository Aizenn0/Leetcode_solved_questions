class Solution {
public:
void recursion(int idx, vector<int>&current, vector<int>&nums,vector<vector<int>>&result){
    sort(nums.begin(),nums.end());
        if(idx==nums.size()){
            result.push_back(current);
            return;
        }
        current.push_back(nums[idx]);
        recursion(idx+1,current,nums,result);
        while(idx+1<nums.size() && nums[idx]==nums[idx+1])idx++;
        current.pop_back();
        recursion(idx+1,current,nums,result);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>result;
        vector<int>current;
        recursion(0,current,nums,result);
        return result;
    }
};