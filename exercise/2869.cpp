#include <iostream>

using namespace std;

int main()
{
    int A, B, V, cnt=0, sum=0;

    cin>> A >> B >> V;

    if((V-B)%(A-B)==0) cout << (V-B) / (A-B);
    else cout << (V-B) / (A-B) + 1;
}