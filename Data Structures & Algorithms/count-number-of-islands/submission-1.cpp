class Solution {
public:

    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        int m = grid.size();
        int n = grid[0].size();
        vector<pair<int,int>>dir={{-1,0},{1,0},{0,-1},{0,1}}; //up down left right
       
         for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                   count++;
                 queue<pair<int,int>> q;
                q.push({i, j});
                grid[i][j]='2';
            
            while(!q.empty()){
             auto [row, col] = q.front();
                    q.pop();
            for(int k=0;k<4;k++){
                int nr = row + dir[k].first;
                int nc = col + dir[k].second;
                if(nr>=0 && nr<m && nc >=0 && nc<n && grid[nr][nc]=='1'){
                    q.push({nr, nc});
                    grid[nr][nc]='2';
                }
            }
        }
                }
            }
        }

        return count;
    }
    // void dfs(int i, int j, int m,int n ,vector<vector<char>>& grid){
        
    //     if(i>=m || j>=n || i<0 || j<0 || grid[i][j]!='1'){
    //         return;
    //     }
    //     grid[i][j]='0';
    //     dfs(i+1,j,m,n,grid); // back 
    //     dfs(i,j-1,m,n,grid);  // left 
    //     dfs(i-1,j,m,n,grid);  // up 
    //     dfs(i,j+1,m,n,grid);  // right

    // }
    // void bfs(int i ,int j , vector<vector<char>>& grid){
        
    //     int count=0;
    //     vector<int,int>dir={{-1,0},{1,0},{0,-1},{0,1}}; //up down left right
       
    //      for(int i=0;i<m;i++){
    //         for(int j=0;j<n;j++){
    //             if(grid[i][j]=='1'){
    //                count++;
    //             queue<int>rowq;
    //             queue<int>colq;
    //             grid[i][j]='2';
            
    //         while(!rowq.empty()){
    //         int row=rowq.front();
    //         rowq.pop();
    //         int col=colq.front();
    //         colq.pop();
    //         for(int k=0;k<4;k++){
    //             int nr=row+dir[k][0];
    //             int nc=col+dir[k][1];
    //             if(nr>=0 && nr<m && nc >=0 && nc<n && grid[nr][nc]=='1'){
    //                 rowq.push(nr);
    //                 colq.push(nc);
    //                 graph[nr][nc]='2';
    //             }
    //         }
    //     }
    //             }

    //     return count;
    //         }
        


    // }



        // int m=grid.size();
        
        // int n=grid[0].size();
        // cout<<m<<" "<<n;
        // int count=0;
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         if(grid[i][j]=='1'){
        //             count++;
        //             dfs(i,j,m,n,grid);
        //         }

        //     }
        // }
        // return count;
    
    
};
