#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<int> s;
    string cmd;
    int N, result = 0,a;
    cin >> N;
    
    for (int i = 0; i< N;i++)
    {
        cin >> cmd;
        if (cmd=="push"){
            cin >> a;
            s.push(a);
        }

        else if(cmd == "pop")
        {
            if(s.size()==0)
            {
                result = -1;
                cout << result << "\n";
            }
            else
            {
                result = s.top();
                cout << result << "\n";
                s.pop();

            }
        }

        else if (cmd == "size")
        {
            cout << s.size() << "\n";
        }
        else if (cmd == "empty")
        {
            if(s.size()==0)
            {
                result = 1;
                cout << result << "\n";
            }
            else
            {
                result = 0;
                cout << result << "\n";
            }
        }
        else if (cmd == "top")
        {
            if(s.size()==0)
            {
                result = -1;
                cout << result << "\n";
            }
            else{

                result = s.top();
                cout << result <<"\n";    
            }
        }
    }




}