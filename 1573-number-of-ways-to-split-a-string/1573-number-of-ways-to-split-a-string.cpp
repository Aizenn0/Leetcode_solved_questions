class Solution {
public:
    int numWays(string s) {
        long long n=s.length();
        long long cnt=0;
        long long mod= 1e9+7;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='1')cnt++;
        }
        if(cnt%3!=0)return 0;
        else if(cnt==0)return ((n-1)*(n-2)/2)%mod;
        long long k=cnt/3;
        long long z1=0,z2=0,c=0;
        for(int i=0; i<n; i++){
            if(s[i]=='1')c++;
            else{
                if(c==k)z1++;
                else if(c==2*k)z2++;
            }
        }
        return ((z1+1)*(z2+1))%mod;
    }
};