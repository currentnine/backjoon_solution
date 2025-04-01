#include <iostream>

using namespace std;

int main()
{
    int n,a,cnt=0, answer=0;

    cin>>n;

    for(int i =0;i<n;i++)
    {
        cin>>a;
        for(int i=1;i<=a;i++)
        {
            if(a%i==0)cnt++;
        }
        if(cnt==2) answer++;
        cnt=0;
    }
    cout<<answer;

}