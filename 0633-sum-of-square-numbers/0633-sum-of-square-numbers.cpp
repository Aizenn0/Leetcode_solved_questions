class Solution {
public:
    bool judgeSquareSum(int c) {
        long long x= sqrt(c);
        long long l=0,r=x;
        while(l<=r){
            long long sum= l*l+r*r;
            if(sum>c)r--;
            else if(sum<c)l++;
            else return true;
        }
        return false;
        
    }
};