class Solution {
public:
    void bt(int k, int n, int sum, int idx, vector<vector<int>>&res, vector<int>&current){
        if(sum==n && current.size()==k){
            res.push_back(current);
            return;
        }
        if(sum>n || idx>9)return;
        current.push_back(idx);
        bt(k,n,sum+idx,idx+1,res,current);
        current.pop_back();
        bt(k,n,sum,idx+1,res,current);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        // vector<int>nums{1,2,3,4,5,6,7,8,9};
        vector<vector<int>>res;
        vector<int>current;
        bt(k,n,0,1,res,current);
        return res;
    }
};