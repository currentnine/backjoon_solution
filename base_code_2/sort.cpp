#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b,c,d,e,f;
    cin >> a >> b >> c;

    d = min({a,b,c});
    e = max({a,b,c});
    f = a+b+c-d-e;
    cout << d << ' ' << f << ' ' << e ;

    return 0;
}