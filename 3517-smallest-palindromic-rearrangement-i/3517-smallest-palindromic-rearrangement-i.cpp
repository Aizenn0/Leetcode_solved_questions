class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.length();
        vector<int>freq(26,0);
        for(char c:s)freq[c-'a']++;
        vector<char>ans(n,0);
        int left=0,right=n-1;
        for(int i=0; i<26; i++){
            while(freq[i]>=2){
                ans[left]=('a'+i);
                ans[right]=('a'+i);
                left++;right--;
                freq[i]-=2;
            }
            if(freq[i]==1)ans[n/2]='a'+i;
        }
        string res(ans.begin(),ans.end());
        return res;
    }
};