#include <iostream>
#include <stack>
using namespace std;

int main()
{

    int N,n, tmp= 1;
    cin>>N;
    stack<int>s;
    for(int i = 0;i<N;i++)
    {
        cin>>n;
        s.push(n);

        while(!s.empty()&&s.top()==tmp){
            s.pop();
            tmp++;
        }
    }
    if(s.empty()) cout << "Nice";
    else cout <<"Sad";


}