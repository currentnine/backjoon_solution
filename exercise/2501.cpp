#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> factor;
    int count = 0;
    int n, k;

    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        if(n%i == 0){
            factor.push_back(i);
            count++;
        }
    }

    if(count<k) cout<<'0';
    else cout << factor[k-1];
}