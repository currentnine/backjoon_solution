#include <iostream>
#include <cmath>

using namespace std;

bool answer(long long n)
{
    if (n<2) return false;
    for(long long i = 2;i*i<=n;i++) 
    {
        if(n%i == 0) return false;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long long a;
        cin>>a;
        while(!answer(a)){
            a++;
        }
        cout<<a<<"\n";

    }
}