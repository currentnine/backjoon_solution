#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> card(n);
    for(int i=0;i<n;i++)cin>>card[i];
    
    vector<int> mask(n,0);
    mask[0] = mask[1] = mask[2] = 1;

    int max_sum = 0;

    do{
        int sum = 0;
        for(int i = 0;i<n;i++) if (mask[i]) sum+=card[i];

        if(sum<=m) max_sum = max(max_sum,sum);
    }while(prev_permutation(mask.begin(), mask.end()));

    cout << max_sum;



}