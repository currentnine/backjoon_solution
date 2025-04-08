#include <iostream>
using namespace std;

int main()
{
    int cnt = 1, n, a=1;
    cin>>n;

    while(n>cnt){
        cnt+=6*a;
        a++;
    }
    cout << a;
}