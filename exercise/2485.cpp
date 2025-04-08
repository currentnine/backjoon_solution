#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    if(b==0) return a;
    else return gcd(b, a%b);
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n), d;
    for(auto &i : v) cin>>i;

    for(int i = 0;i<n-1;i++) d.push_back(v[i+1]-v[i]);
                                
    int dis = v[n-1] - v[0];    
    int g = d[0];               
    for(int i=0;i<d.size();i++) g = gcd(g,d[i]);
    
    int answer = dis / g; 
    answer-=n-1;            

    cout<<answer;

    


}
