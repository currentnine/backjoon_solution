#include <iostream>

using namespace std;

int n , mod = 10007;
int d[10005];

int main(){

    cin>>n;
    d[1] = 1;
    d[2] = 2;

    for(int i = 3;i<=n;i++) d[i] = (d[i-1] + d[i-2] )% mod;
    cout << d[n];
}