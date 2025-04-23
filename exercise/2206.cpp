#include <iostream>
#include <queue>
#include <string>

using namespace std;

string board[1002];
#define X first
#define Y second
int n,m;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int dist1[1002][1002];

int main()
{   
    cin>>n>>m;
    for(int i = 0;i<n;i++) 
    {   cin>>board[i];
        fill(dist1[i],dist1[i]+m,-1);
    }
    

    queue<pair<int,int>> q;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++)
        {
            
            if(board[i][j]=='1')
            {
                q.push({i,j});
                dist1[i][j] = 0;
            }
        }    
    }

    while(!q.empty())
    {
        auto cur = q.front(); q.pop();
        for(int dir = 0; dir<4;dir++)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
            if(dist1[nx][ny]!=-1 ) continue;
            if(board[nx][ny] == '0') continue;
            dist1[nx][ny] = dist1[cur.X][cur.Y]+1;
            q.push({nx,ny}); 


        }
       
    }
    int answer = 0;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            if(board[i][j] != '0' && dist1[i][j]==-1){
                cout << -1<<"\n";
                return 0;
            }
            answer = max(answer,dist1[i][j]);
        }
       
    }
    cout << answer << "\n"; 
    return 0;


}