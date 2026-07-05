class Solution {
public:
    bool checkValidString(string s) {
        int n= s.length();
        int x=0, y=0;
        for(char c: s){
            if(c=='('){
                x++; y++;
            }
            else if(c==')'){
                x--; y--;
            }
            else{
                x--; y++;
            }
            if(y<0)return false;
            if(x<0)x=0;
        }
        return x==0;
    }
};