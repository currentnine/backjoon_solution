#include <iostream>
#include <map>

using namespace std;

int n;
map<string, bool> m;

int main(){
    int count = 0;
    string str1,str2;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>str1>>str2;

        if(str1 == "ChongChong") { m.insert({str1, true}); }
        else if(str2 == "ChongChong") { m.insert({str2, true}); }

        if(m[str1]) { m[str2] = true; }
        if(m[str2]) { m[str1] = true; }
    }

    for(auto& a : m ){
        if(a.second) { count++; }
    }
    cout << count;
}
