#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int i,input[7],odd=0,min_odd=100;

    for (i=0;i<7;i++){
        cin>>input[i];            
    };

    for(i=0;i<7;i++){
        if((input[i])%2==1) 
        {
        odd+=input[i];  
        min_odd = min(min_odd,input[i]) ;
    }
    };
    if (odd==0) {
        cout<<-1; 
        return 0;
        
    }
    cout << odd << "\n" << min_odd;
    

}