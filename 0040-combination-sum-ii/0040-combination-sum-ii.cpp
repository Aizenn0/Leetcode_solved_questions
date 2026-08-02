class Solution {
public:
    void bt(int idx, int sum, vector<int>&current, vector<int>& candidates, int target, vector<vector<int>>&res){
        sort(candidates.begin(),candidates.end());
        if(sum==target){
            res.push_back(current);
            return;
        }
        if(idx==candidates.size() || sum>target)return;
        current.push_back(candidates[idx]);
        bt(idx+1,sum+candidates[idx],current,candidates,target,res);
        while(idx+1<candidates.size() && candidates[idx]==candidates[idx+1]){
            idx++;
        }
        current.pop_back();
        bt(idx+1,sum,current,candidates,target,res);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>current;
        bt(0,0,current,candidates,target,res);
        return res;
    }
};