class Solution {
public:
    void recursion(int n,int open, int close,string current,vector<string>&res){
        if(current.size()==2*n){
            res.push_back(current);
            return;
        }
        if(open<n)recursion(n,open+1,close,current+"(",res);
        if(close<open)recursion(n,open,close+1,current+")",res);
    }
    vector<string> generateParenthesis(int n) {
        vector<string>res;
        recursion(n,0,0,"",res);
        return res;
    }
};