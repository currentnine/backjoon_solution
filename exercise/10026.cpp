#include <iostream>
#include <queue>

using namespace std;

#define X first
#define Y second

string board[102];

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int dist[102][102];

int n;

int main()
{
    int q1_cnt =0, q2_cnt=0;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>board[i];
        fill(dist[i],dist[i]+n,-1);
    } 

    queue<pair<int,int>> q1;
    queue<pair<int,int>> q2;
    

    for(int i = 0; i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            if(dist[i][j]==-1)
            {
                q1.push({i,j});
                dist[i][j] = 1;
                q1_cnt++;
            
            while(!q1.empty()) // 적록색약이 아닐때
                {   
                    auto cur = q1.front(); q1.pop();
                    for(int dir=0;dir<4;dir++)
                    {
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];

                        if(nx<0 || nx>=n || ny<0 || ny>=n) continue;
                        if(dist[nx][ny] !=1 ) continue;
                        if(board[nx][ny]!= board[cur.X][cur.Y]) continue;



                        dist[nx][ny] = 1;
                        // q1_cnt++;
                        q1.push({nx,ny});
                    }   
                }
            }
        }

    }
    
    cout << q1_cnt << " ";




    //적록색약일때
    for(int i =0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            if (board[i][j] == 'G')
            {
                board[i][j] =='R';
            }
        }
    }

    for(int i = 0;i<n;i++)
    {
        // cin>>board[i];
        fill(dist[i],dist[i]+n,-1);
    } 

    while(!q2.empty()) 
    {
        auto cur = q2.front(); q2.pop();
        for(int dir=0;dir<4;dir++)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if(nx<0 || nx>=n || ny<0 || ny>=n) continue;
            if(dist[nx][ny] || board[nx][ny] !=1 ) continue;
            dist[nx][ny] = 1;
            q2_cnt++;
            q2.push({nx,ny});
        }   
    }
    cout << q2_cnt << " ";
    

}


