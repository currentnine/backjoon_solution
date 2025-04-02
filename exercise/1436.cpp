#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, num = 666, cnt = 0;

    cin >>n;

    while(1){
        if(to_string(num).find("666")!=string::npos)
        {
            cnt++;
            if(cnt==n)
            {
                cout<<num << "\n";
                break;
            }
        }
        num++;
    }
    

}