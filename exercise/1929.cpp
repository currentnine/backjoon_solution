#include<iostream>

using namespace std;

bool check(int a){
    if (a<2) return false;
    for(long long i=2;i*i<=a;i++)
    {
        if(a%i==0) return false;
    }
    return true;
}

int main(){

    long long m,n;
    
    cin>>m>>n;

    for(int i=m;i<=n;i++)
    {
        if(check(i))cout<<i<<"\n";
    }


}