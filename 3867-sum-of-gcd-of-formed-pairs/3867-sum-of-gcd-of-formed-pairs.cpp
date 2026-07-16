class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n= nums.size();
        vector<long long>p(n,0);
        p[0]=nums[0];
        int m=p[0];
        for(int i=1; i<n; i++){
            m=max(m,nums[i]);
            p[i]=gcd(nums[i],m);
        }
        sort(p.begin(),p.end());
        int l=0, r=n-1;
        long long sum=0;
        while(l<r){
            sum+=gcd(p[l],p[r]);
            l++;r--;
        }
        return sum;
    }
    int gcd(int a,int b){
        while(b!=0){
            a%=b;
            swap(a,b);
        }
        return a;
    }
};