#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, v=0,idx=0;
    for(int i = 0;i<9;i++)
    {
        cin>>N;
        if(v<N)
        {
            v = N;
            idx = i+1; 
        }
    }

    cout<< v <<"\n"<< idx;
    return 0;

}