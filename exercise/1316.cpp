#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int m,sum=0;
    string n;

    cin>>m;
    for(int i=0;i<m; i++){

    cin>>n;
    int flag = 1;
    for(int j = 0; j < n.length();j++)
    {
        for(int k = j+1;k<n.length();k++)
        {
            if(n[k-1]!=n[j]&&n[k]==n[j])
            {
                flag = 0;
                break;
            }
        }
        if(flag == 0) break;
    }
    if(flag==1) sum++;
    }
    cout << sum;

}