#include <iostream>

using namespace std;

int main()
{
    int N, dot = 2;
    cin>>N;
    while(N--) dot = dot*2 -1;
    cout << dot * dot;    
}