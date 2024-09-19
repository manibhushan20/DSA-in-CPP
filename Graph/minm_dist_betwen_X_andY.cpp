// User function Template for C++

class Solution {
  public:
    int shortestXYDist(vector<vector<char>>& grid, int N, int M) {
        // code here
        vector<pair<int, int >> directions = {{-1,0}, {1,0},{0,-1},{0,1}};
        queue<pair<int, int>> q;
        vector<vector<int>> distance(N, vector<int>(M, INT_MAX));
        for(int i = 0 ; i<N; ++i){
            for(int j= 0; j<M; ++j){
                if(grid[i][j] == 'X'){
                    q.push({i, j});
                    distance[i][j] = 0;
                }
            }
        }
        while(!q.empty()){
            auto curr = q.front();
            q.pop();
            int currX = curr.first;
            int currY = curr.second;
            
            for(auto dir : directions){
                int newX = currX +dir.first;
                int newY = currY + dir.second;
                if(newX >= 0 && newX < N &&  newY >= 0 && newY < M && distance[newX][newY] == INT_MAX){
                    distance[newX][newY] =  distance[currX][currY] + 1;
                    if(grid[newX][newY] == 'Y'){
                        return distance[newX][newY];
                    }
                    q.push({newX, newY});
                }
            }
        }
        return -1;
        
    }
};