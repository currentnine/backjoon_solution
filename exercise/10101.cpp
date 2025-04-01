#include<iostream>

using namespace std;

int main(){
    int s[3],sum = 0;

    for(int i=0;i<3;i++) 
    {
        cin>>s[i];
        sum+=s[i];
    }
    if (s[0] ==60 && s[1] == 60 && s[2] ==60) cout << "Equilateral";
    else if(sum == 180)
    {
        if(s[0]==s[1]||s[1]==s[2]||s[0]==s[2]) cout<<"Isosceles";
        else cout<<"Scalene";
    }
    else cout<<"Error";

}