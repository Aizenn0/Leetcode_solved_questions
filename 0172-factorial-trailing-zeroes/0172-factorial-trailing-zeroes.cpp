class Solution {
public:
    int trailingZeroes(int n) {
        int c2=0,c5=0;
        for(int i=1; i<=n; i++){
            int x=i;
            while(x%5==0){
                x/=5;
                c5++;
            }
        }
        return c5;
    }
};