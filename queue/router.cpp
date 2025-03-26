#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    queue<int>q;
    int N, packet = 0;
    cin>>N;
    while(1){
        cin>>packet;
        if(packet == -1) break;
        else if(packet != 0 && int(q.size()) < N)q.push(packet);
        else if(packet == 0 && !q.empty())q.pop();
        
    }
    
    if(q.empty())cout<<"empty";
    else{
        while(!q.empty())
        {
            cout << q.front() << " ";
            q.pop();
        }
    }
}