#include <iostream>
#include <set>

using namespace std;

int main()
{

    int N,count=0;
    cin>>N;
    set<string>m;
    string str;
    for(int i = 0;i<N;i++)
    {
        cin>>str;
        if(str == "ENTER")
        {
            count +=m.size();
            m.clear();
            continue;
        }
        m.insert(str);
    }
    count+=m.size();
    cout << count;
}