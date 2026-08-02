class Solution {
public:
    void recursion(int idx, vector<int>&current, vector<int>&nums,vector<vector<int>>&result){
        if(idx==nums.size()){
            result.push_back(current);
            return;
        }
        current.push_back(nums[idx]);
        recursion(idx+1,current,nums,result);
        current.pop_back();
        recursion(idx+1,current,nums,result);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>result;
        vector<int>current;
        recursion(0,current,nums,result);
        return result;
    }
};