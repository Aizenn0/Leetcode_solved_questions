class Solution {
public:
    void backtrack(int idx,int sum,vector<int>&candidates,int target,vector<int>&current,vector<vector<int>>&res){
        if(sum==target){
            res.push_back(current);
            return;
        }
        if(idx==candidates.size() || sum>target)return;
        current.push_back(candidates[idx]);
        backtrack(idx,sum+candidates[idx],candidates,target,current,res);
        current.pop_back();
        backtrack(idx+1,sum,candidates,target,current,res);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>current;
        backtrack(0,0,candidates,target,current,res);
        return res;
    }
};