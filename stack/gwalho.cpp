#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    
    string st;
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        stack <char> s; // 스택 초기화 중요
        cin>>st;
        for(int j= 0;j<int(st.length()); j++)
        {
            if(s.empty()) s.push(st[j]);
            else{
                if(s.top()=='(' && st[j] == ')') s.pop();// 짝 맞으면
                else s.push(st[j]);
            }
        }
        if(s.empty())cout<< "YES" << "\n";
        else cout<<"NO" << "\n";
    }
}