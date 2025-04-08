#include <iostream>

using namespace std;

int gcd (int a,int b){      // 최대공약수 구하기
    if(b==0) return a;
    else return gcd(b, a%b);
}
int main()
{
    long long int a,b;
        cin>>a>>b;
        cout << a*b/gcd(a,b)<<"\n";


}