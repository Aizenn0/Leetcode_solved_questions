class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& w) {
        intervals.push_back(w);
        int n= intervals.size();
        sort(intervals.begin(), intervals.end());
        vector<vector<int>>a;
        a.push_back(intervals[0]);
        for(int i=1; i<n; i++){
            if(intervals[i][0] <=a.back()[1])a.back()[1]=max(a.back()[1],intervals[i][1]);
            else a.push_back(intervals[i]);
        }
        return a;
    }
};