#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<string> croatian = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    int idx;
    string s;
    cin>>s;

    for(int i=0;i<croatian.size();i++)
    {
        while(1){
            idx = s.find(croatian[i]);
            if(idx==string::npos) break;
            s.replace(idx,croatian[i].length(),"#");
        }
    }
    
    cout<<s.length();
    
} 