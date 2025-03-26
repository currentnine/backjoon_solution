#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N,M, test_case, a;
    cin>>test_case;
    for(int i = 0; i<test_case;i++)
    {
        cin>>N,M;
        queue <pair<int,int>> q;
        priority_queue<int> pq;
        for(int j=0;j<N;j++)
        {
            cin>>a;
            q.push({a,i}); // 중요도, 문서
            pq.push(a);
        }
        
        
    }





}