#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    cin >> N;
    int Y=0,M=0, phone[10000];
    for (int i=0;i<N;i++)
    {
        cin>>phone[i];
    }

    for (int i=0;i<N;i++)
    {
        Y += (phone[i]/30+1)*10;
    }

    for (int i=0;i<N;i++)
    {
        M += (phone[i]/60+1)*15;
    }

    if(Y>M) cout<<"M" << " " << M;
    else if (Y<M) cout << "Y" << " " << Y;
    else cout << "Y M" <<" "<< Y;

}