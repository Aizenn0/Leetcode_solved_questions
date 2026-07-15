class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string>res;
        if(digits.empty())return res;
        unordered_map<char,string>mp={
            {'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}
        };
        bt(digits,0,"",res,mp);
        return res;
    }
    void bt(string &digits, int i,string comb, vector<string>&res, unordered_map<char,string>&mp){
        if(i==digits.length()){
            res.push_back(comb);
            return;
        }
        string letters= mp.at(digits[i]);
        for(char letter: letters)
            bt(digits,i+1,comb+letter,res,mp);
    }
};