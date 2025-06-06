#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

int n,m;
using namespace std;

bool comp(pair<int,string>a, pair<int,string>b){
    if(a.first == b.first){
        if ( a.second.length() == b.second.length()) return a.second < b.second;
        else return a.second.length() > b.second.length();
    }
    else return a.first > b.first;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<pair<int, string>> dict;
    cin>>n>>m;
    map<string,int> check;
    
    for(int i =0; i< n;i++){
        string str;
        cin >> str;
        if(str.length() < m) continue;
        check[str]++;
    }
    for(auto a : check) dict.push_back({a.second, a.first});
    sort(dict.begin(), dict.end(), comp);
    for(auto a : dict) cout << a.second << "\n";

}