class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>pref(n,0);
        pref[0]=nums[0];
        for(int i=1; i<n; i++)pref[i]=pref[i-1]*nums[i];
        vector<int>suff(n,0);
        suff[n-1]=nums[n-1];
        for(int i=n-2; i>=0; i--)suff[i]=suff[i+1]*nums[i];
        vector<int>ans;
        ans.push_back(suff[1]);
        for(int i=1; i<n-1; i++){
            int t=pref[i-1]*suff[i+1];
            ans.push_back(t);
        }
        ans.push_back(pref[n-2]);
        return ans;
    }
};