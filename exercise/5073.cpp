#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a,b,c;
    
    
    while(1)
    {
        cin>>a>>b>>c;
        int max_val=max({a,b,c});
        int sum = a+b+c;
        if (a == 0 && b == 0 && c == 0) break;
        if(max_val>=sum-max_val)cout<<"Invalid"<<"\n";
        else if(a==b&&b==c)cout<<"Equilateral"<<"\n";
        else if(a==b||b==c||a==c)cout<<"Isosceles"<<"\n";
        else cout<<"Scalene "<<"\n";
    }

    
}