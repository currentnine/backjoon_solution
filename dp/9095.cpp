#include <iostream>

using namespace std;
int t, n, d[20];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    d[1] = 1;
    d[2] = 2;
    d[3] = 4;
    cin>>t;
    for(int  i = 4; i<11;i++)d[i] = d[i-1] + d[i-2] + d[i-3];
    for(int i = 0; i<t;i++){
        cin>>n;
        cout<<d[n]<<"\n";
    }
}