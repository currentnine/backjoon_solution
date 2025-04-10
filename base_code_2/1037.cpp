#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main()
{
    long long N,n;
    cin>>N;
    vector<int> v;
    for(int i=0;i<N;i++)
    {
        cin>>n;
        v.push_back(n);
    }

    sort(v.begin(),v.end());

    cout << v[0] * v[N-1];

}