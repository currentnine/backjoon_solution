#include<iostream>

using namespace std;

int main()
{
    int result = 0;
    int n;
    cin>>n;
    for(int i = 1;i<n;i++){
        int sum = 0 ;
        int num = i;
        while(num!=0){
            sum += num%10;
            num /=10;
        }
        if(sum+i ==n){
            result = i;
            break;
        }
    }
    cout << result;
}