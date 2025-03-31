#include <iostream>

using namespace std;

int main()
{

    int T, C;
    int change[4] = {25, 10 ,5, 1};
    cin>>T;
    
    for(int i =0; i<T;i++)
    {
        cin>>C;    
        for(int i =0;i<4;i++)
            {
                cout << C/change[i]<<' ';
                C %= change[i];
            }
        cout << '\n';
    }
    

}