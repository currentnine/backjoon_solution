#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if (b==0) return a;
    else return gcd(b, a%b);
}
int a,b,c,d;
    
int main()
{
    int num1,num2;
    cin>>a>>b>>c>>d;

    num1 = (a*d) + (b*c);
    num2 = (b*d);

    int k = gcd(num1,num2);
    cout << num1/k << " " << num2/k; 

}