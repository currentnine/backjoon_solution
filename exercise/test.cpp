#include <iostream>
#include <algorithm>
int arr[100];
void swap(int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    
    int n,m;
    int a,b;
    cin >> n >> m;
    for(int i = 1;i<=n;i++)
    {
        arr[i] = i;
    }
    for(int i = 0;i<m;i++)
    {   
        cin>>a>>b;
        swap(a,b);
    }
    for(int i = 1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }

}   