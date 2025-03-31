#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int>factor;
    int n,sum=0;
    while(n!=-1)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            if(n%i==0) 
            {
                factor.push_back(i);
                sum+=i;
            }
        }
        if(sum==n)
        {
            for(int i=0;i<factor.;
        }
        
    }
}