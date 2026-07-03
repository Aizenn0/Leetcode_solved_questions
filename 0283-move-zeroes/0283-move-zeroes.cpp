class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int l=0,r=0;
        while(r<a.size()){
            if(a[r]!=0){
                swap(a[l],a[r]);
                l++;
            }
            r++;
        }
    }
};