#include <iostream>

using namespace std;

int main()
{
    int a, answer = 0;
    string n;

    cin>>n>>a;

    for(int i = 0;i<int(n.length());i++)
    {
        if('0'<=n[i]&&n[i]<='9') answer = answer * a + (n[i] - '0');
        else answer = answer * a + (n[i] - 'A' + 10);

    }

    cout << answer;

}