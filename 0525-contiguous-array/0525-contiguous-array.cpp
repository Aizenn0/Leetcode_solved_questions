class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]==0)nums[i]=-1;
        }
        vector<int>pref(n,0);
        pref[0]=nums[0];
        for(int i=1; i<n; i++)pref[i]=pref[i-1]+nums[i];
        unordered_map<int,int>mp;
        mp[0]=-1;
        int ans=0;
        for(int i=0; i<n; i++){
            if(mp.find(pref[i])!=mp.end()){
                int t= i-mp[pref[i]];
                ans=max(ans,t);
            }
            else mp[pref[i]]=i;
        }
        return ans;
    }
};