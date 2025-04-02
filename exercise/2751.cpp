#include <iostream>
#include <algorithm>

using namespace std;



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,x;
    cin>>n;
    int count[10001] = {0};
    while(n--){
        cin>>x;
        count[x]++;
    }

    for(int  i =1;i<=10000;i++){
        while(count[i]--){
            cout << i<<"\n";
        }
    }

    
}
