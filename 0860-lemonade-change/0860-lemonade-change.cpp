class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int c1=0, c2=0, c3=0;
        for(int i=0; i<bills.size(); i++){
            if(bills[i]==5)c1++;
            if(bills[i]==10){
                c1--;
                c2++;
                if(c1<0){
                    return false; break;
                }
            }
            if(bills[i]==20){
                if(c2>0){
                    c2--;
                    c1--;
                }
                else c1-=3;
                if(c1<0){
                    return false; break;
                }
            }
        }
        return true;
    }
};