class Solution {
public:
    int jump(vector<int>& nums) {
        int n= nums.size();
        int next=0;
        int t=0, j=0;
        for(int i=0; i<n-1; i++){
            next= max(next, i+nums[i]);
            if(i==t){
                j++;
                t=next;
                if(next>=n-1)break;
            }
        }
        return j;
    }
};