class Solution {
public:
    bool dfs(vector<vector<char>>&board, const string &word, int r, int c, int idx){
        if(idx==word.length())return true;
        if(r<0 || r>=board.size()|| c<0|| c>=board[0].size()|| board[r][c]!=word[idx])return false;
        char temp=board[r][c];
        board[r][c]='#';
        bool found = dfs(board, word, r + 1, c, idx + 1) ||
                     dfs(board, word, r - 1, c, idx + 1) ||
                     dfs(board, word, r, c + 1, idx + 1) ||
                     dfs(board, word, r, c - 1, idx + 1);
        board[r][c]=temp;
        return found;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        unordered_map<char,int>boardcount;
        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                boardcount[board[i][j]]++;
            }
        }
        unordered_map<char,int>wordcount;
        for (char ch : word){
            wordcount[ch]++;
            if(wordcount[ch]>boardcount[ch]) {
                return false;
            }
        }
        if (boardcount[word.front()]>boardcount[word.back()])reverse(word.begin(), word.end());
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                if (board[i][j]==word[0] && dfs(board, word, i, j, 0))return true;
            }
        }
        return false;
    }
};