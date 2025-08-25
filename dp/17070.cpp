#include <iostream>
#define MAX 32

using namespace std;

int n, answer = 0;
int arr[MAX][MAX];
bool visited[MAX][MAX] = {false, };
int dx[3] = {0, 1, 1};
int dy[3] = {1, 0, 1};

void dfs(int x, int y, int dir){

    if(x == n-1 && y == n -1){
        answer++;
        return;
    }

    visited[x][y] = true;
    for(int i = 0; i< 3; i++){
        if(dir == 0 && i == 1) continue; // 파이프 가로, 세로 방향 이동
        else if(dir == 1 && i == 0) continue; // 파이프 세로, 가로 방향 이동
        else{
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if(nx < 0 || ny < 0 || nx >=n || ny >= n) continue;

            if(i<2){ // 가로 세로 이동
                if(!arr[nx][ny] && !visited[nx][ny]){
                    dfs(nx,ny,i);
                    visited[nx][ny] = false;
                }
            }

            else{ // 대갓ㄱ선
                if(!arr[nx][ny] && !arr[nx-1][ny] && !arr[nx][ny-1] && !visited[nx][ny]){
                    dfs(nx, ny, i);
                    visited[nx][ny]  = false;
                }
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j <n; j++) cin >> arr[i][j];


    dfs(0,1,0);
    cout << answer;
    
}