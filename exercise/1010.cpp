#include<iostream>

using namespace std;

long long comb(int a, int b){
    long long answer = 1;
    for(int i=1;i<=b;i++){
        answer *=(a-i+1);
        answer /=i;
    }
    return answer;
}


int main()
{

    int t;
    cin>>t;

    int n,m;

    for(int i=0;i<t;i++)
    {
        cin>>n>>m;
        cout << comb(m,n)<< "\n";
        
    }

}