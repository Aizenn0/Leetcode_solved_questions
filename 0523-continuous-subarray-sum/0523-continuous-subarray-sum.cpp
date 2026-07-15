class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        if(nums.size()<2)return false;
        vector<int>pref(n,0);
        pref[0]=nums[0];
        for(int i=1; i<n; i++){
            pref[i]=pref[i-1]+nums[i];
            pref[i-1]%=k;
        }
        pref[n-1]%=k;
        for(int i=1; i<n; i++)if(pref[i]==0)return true;
        unordered_map<int,int>mp;
        for(int i=0; i<n; i++){
            if(mp.find(pref[i])!=mp.end()){
                if(i-mp[pref[i]]>=2)return true;
            } else mp[pref[i]]=i;
        }
        return false;

    }
};