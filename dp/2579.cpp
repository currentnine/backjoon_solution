#include <iostream>

using namespace std;

int n, stars[305], d[305];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>n;
    int total = 0;
    for(int i = 1;i<=n;i++){
        cin >>stars[i];
        total += stars[i];
    }
    if(n<=2){
        cout << total;
        return 0;
    }
    d[1] = stars[1];
    d[2] = stars[2];
    d[3] = stars[3];

    for(int i = 4; i <= n-1; i++) d[i] = min(d[i-2], d[i-3]) + stars[i];
    cout << total - min(d[n-1],d[n-2]);
}