#include <iostream>

using namespace std;

int main(){
    int X;
    cin>>X;

    int i = 1;
    while(X>i){
        X-= i;
        i++;
    }
    if(i%2 == 1) // È¦¼öÀÏ¶§
        cout<< i-X+1 << '/' << X;
    else
        cout<<X<<'/'<< i-X+1;

}