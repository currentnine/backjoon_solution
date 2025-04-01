#include <iostream>

using namespace std;

int main()
{
    int n, m=2;

    cin>>n;

    while(n>1)
    {
        if(n%m==0)
        {
            cout<<m<<"\n";
            n/=m;
        }
        else
        {
            m++;
        }   
    }
}