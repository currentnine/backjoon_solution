#include <iostream>
#include <deque>

using namespace std;

deque<pair<int,int>>dq;

int main()
{
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        dq.push_back(make_pair(x,i+1));
    }

    while (!dq.empty())
    {
        int cur = dq.front().first;
        cout<< dq.front().second <<" ";
        dq.pop_front();
        if(dq.empty()) break;

        if(cur >0)
        {
            for(int i =0;i<cur-1;i++)
            {
                dq.push_back(dq.front());
                dq.pop_front();
            }

        }
        else
        {
            for(int i = 0; i<(-1)*cur;i++)
            {
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }
    

}