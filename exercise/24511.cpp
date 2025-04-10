#include <iostream>
#include <deque>
#include <vector>
using namespace std;

deque <int> dq;


int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m,x;
    cin>>n;
    vector<int> flag(n);
    for(int i = 0;i<n;i++) cin>>flag[i];

    for(int i = 0;i<n;i++)
    {
        cin>>x;
        if(flag[i]==0) dq.push_back(x);
    }

    cin>>m;
    for(int i = 0;i<m;i++)
    {
        int a;
        cin>>a;
        
        dq.push_front(a);
        if (!dq.empty()) {
            cout << dq.back() << " ";
            dq.pop_back();
        }
        
    }
    return 0;

}