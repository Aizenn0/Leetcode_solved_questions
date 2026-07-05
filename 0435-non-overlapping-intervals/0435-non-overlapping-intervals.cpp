class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n= intervals.size();
        sort(intervals.begin(), intervals.end());
        vector<vector<int>>a;
        int t= intervals[0][1];
        int cnt=0;
        for(int i=1; i<n; i++){
            if(t>intervals[i][0]){
                cnt++;
                t=min(t,intervals[i][1]);
            }
            else t=intervals[i][1];
        }
        return cnt;
    }
};