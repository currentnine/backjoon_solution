#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m,n,answer=0;
    vector<int> answer_min;
    cin>>m>>n;
    for(int i=m;i<=n;i++)
    {
        int cnt=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0) cnt++;
        }
        if(cnt == 2)
        {
            answer_min.push_back(i);
            answer+=i;
        }
    }
    if(answer_min.empty()) 
    {
        cout<<-1;
        return 0;
    }
    cout<<answer<<"\n";
    cout<<answer_min[0];
    
}