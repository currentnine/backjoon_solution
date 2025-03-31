#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string name, grade;
    double a=0.0, input,num, sum = 0.0;
    for(int i=0;i<20;i++)
    {
        cin>>name>>input>>grade;
        if(grade=="P") continue;
        
        a += input;
        if(grade[0] == 'A') num = 4;
        else if(grade[0]=='B') num = 3;
        else if(grade[0]=='C') num = 2;
        else if(grade[0]=='D') num = 1;
        else if(grade[0]=='F') num = 0;
        if(grade[1] == '+') num+=0.5;

        sum += input * num;

    }
    cout.precision(10);
    cout << sum/a;

}