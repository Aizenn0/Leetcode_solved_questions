class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        unordered_set<int>s(nums.begin(),nums.end());
        vector<int>ans;
        int l=nums[0],r=nums[n-1];
        for(int i=l;i<=r;i++){
            if(s.find(i)==s.end())ans.push_back(i);
        }
        return ans;
    }
};