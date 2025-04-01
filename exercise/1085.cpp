#include <iostream>

using namespace std;

int main()
{

    int x,y,w,h;
    cin>>x>>y>>w>>h;

    int a,b;
    a=min(x,y);
    b=min(w-x,h-y);
    cout<<min(a,b);

    
}