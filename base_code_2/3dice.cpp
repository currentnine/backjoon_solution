#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int a,b,c;

    cin >> a >> b >> c;
    
    if (a==b && b==c) cout<<10000 + a*1000;
    else if (a==b || b==c) cout << 1000+100*b;
    else if (a==b || a==c) cout << 1000 + 100*a;
    else if (c==a || c==b) cout << 1000 + 100*c;
    else cout<< max({a,b,c})*100;

}