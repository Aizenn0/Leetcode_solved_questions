class Solution {
public:
    bool canMakeSubsequence(string s, string t) {
        int n=s.length(), m=t.length();
        if(n>m)return false;
        vector<int>a(n,-1);
        int j=m-1;
        for(int i=n-1; i>=0; i--){
            while(j>=0 && t[j]!=s[i])j--;
            if(j>=0){a[i]=j; j--;}
        }
        j=0;
        for(int i=0; i<n; i++){
            int next;
            if(i+1<n)next=a[i+1];
            else next =m;
            if(next>j) return true;
            while(j<m && t[j]!=s[i])j++;
            if(j==m)break;
            j++;
        }
        return false;
    }
};