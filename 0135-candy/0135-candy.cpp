class Solution {
public:
    int candy(vector<int>& r) {
        int n=r.size();
        vector<int>a(n,1);
        for(int i=1; i<n; i++){
            if(r[i]>r[i-1])a[i]=a[i-1]+1;
        }
        int cnt=0;
        for(int i=n-1; i>0; i--){
            if(r[i-1]>r[i])a[i-1]=max(a[i-1], a[i]+1);
            cnt+=a[i];
        }
        return cnt+a[0];
    }
};