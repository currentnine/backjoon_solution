#include <iostream>

using namespace std;

int fact(int a)
{
    if(a<=1) return 1;
    else return fact(a-1)*a;
}
int main()
{
    int n,k;
    cin>>n>>k;
    cout << fact(n) / fact(k) /fact(n-k);
}