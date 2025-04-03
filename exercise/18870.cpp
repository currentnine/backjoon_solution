#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector <int> v(n);
    
    for(int i = 0; i<n;i++) cin>>v[i];
    auto a = v;
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());

    for(int i=0;i<n;i++){
        int answer = lower_bound(a.begin(), a.end(), v[i]) - a.begin();
        cout << answer <<" ";
    }


}