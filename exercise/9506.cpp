#include <iostream>
#include <vector>

using namespace std;

int main()
{
    
    int n;
    while(true)
    {
        cin>>n;
        if(n==-1) break;
        vector<int>factor;
        int sum = 0;
        for(int i=1;i<n;i++)
        {
            if(n%i==0) 
            {
                factor.push_back(i);
                sum+=i;
            }
        }
        if(sum==n)
        {
            cout << n << " = ";
            for(int i=0;i<int(factor.size());i++)
            {
                cout<<factor[i];
                if(i!=int(factor.size())-1) cout<<" + ";
            }
            cout<<"\n";
        }
        else {
            cout << n << " is NOT perfect."<<"\n";
        }
        
    }
}