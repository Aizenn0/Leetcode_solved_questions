class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int m= *max_element(nums.begin(),nums.end());
        vector<int>hash(m+1,0);
        for(auto &x: nums)hash[x]++;
        nums.clear();
        for(int i=0; i<hash.size(); i++){
            if(hash[i]>1)nums.push_back(i);
        }
        return nums;
    }
};