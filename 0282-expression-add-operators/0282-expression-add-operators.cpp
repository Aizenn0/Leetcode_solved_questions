class Solution {
public:
    void bt(string num,int target,vector<string>&res,int idx,string current,long long curr,long long prev){
        if(idx==num.size()){
            if(curr==target)res.push_back(current);
            return;
        }
        
        long long val=0;
        string m;
        for(int i=idx; i<num.size(); i++){
            if(i>idx && num[idx]=='0')break;
            m+=num[i];
            val=val*10+num[i]-'0';
            if(idx==0)bt(num,target,res,i+1,current+m,val,val);
            else{
                bt(num,target,res,i+1,current+'+'+m,curr+val,val);
                bt(num,target,res,i+1,current+'-'+m,curr-val,-val);
                bt(num,target,res,i+1,current+'*'+m,curr-prev+prev*val,prev*val);
            }
        }
    }
    vector<string> addOperators(string num, int target) {
        vector<string>res;
        bt(num,target,res,0,"",0,0);
        return res;
    }
};