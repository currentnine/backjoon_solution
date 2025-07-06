#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#define X first
#define Y second

int n,m;
bool visit[51][51];
int board[51][51];
int dx[4]={1, 0, -1, 0};
int dy[4]={0, 1, 0, -1};


int main(){

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> board[i][j];
        }
    }
}
