#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, cnt=0;
    cin>> n >> m;
    vector <string>v(n);
    vector <string>answer;

    for(int i = 0; i<n;i++)cin>>v[i];

    sort(v.begin(),v.end());
    string mn;
    for(int i=0; i<m;i++)
    {
        cin>>mn;
        if(binary_search(v.begin(),v.end(), mn)) cnt++;

    }

    cout << cnt;



}