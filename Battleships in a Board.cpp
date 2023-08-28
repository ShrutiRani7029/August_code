class Solution {
public:

void dfs(int i,int j, int vis[][600],vector<vector<char>>&board,int n,int m){

    if(i<0 || j<0 || i>=n || j>=m || vis[i][j]==1 || board[i][j]=='.')return;
    if(!vis[i][j]){
        vis[i][j]=1;
        dfs(i-1,j,vis,board,n,m);
         dfs(i+1,j,vis,board,n,m);
          dfs(i,j-1,vis,board,n,m);
           dfs(i,j+1,vis,board,n,m);
    }
}


    int countBattleships(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();

        int vis[600][600];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                vis[i][j]=0;
            }
        }
        int count=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='X' && !vis[i][j])
                {
                dfs(i,j,vis,board,n,m);
                count++;
                }
            }
        }
        return count;


    }
};
