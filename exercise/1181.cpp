#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

bool compare(const string &a, const string &b) {
    if (a.size() == b.size()) return a < b;  // 사전 순
    return a.size() < b.size();              // 길이 순
}

int main()
{
    int n;
    cin>>n;
    vector<string> v(n);
    for(int i = 0; i< n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(), v.end()),v.end());
    sort(v.begin(),v.end(),compare);

//    set<string> s(v.begin(), v.end());
//    for(set<string>::iterator it=s.begin();it!=s.end();it++) cout << *it <<"\n";
    for(int i =0;i<v.size();i++) cout << v[i] << "\n";
}