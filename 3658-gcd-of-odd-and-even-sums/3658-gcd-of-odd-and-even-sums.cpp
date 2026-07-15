class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int odd=0,even=0;
        for(int i=1; i<=n; i++){
            odd+=2*n-1;
            even+=2*n;
        }
        while(even!=0){
            odd%=even;
            swap(odd,even);
        }
        return odd;
    }
};