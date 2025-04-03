#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <pair<string,string>> v(n);
    vector<string> answer;

    for(int i=0;i<n;i++) cin>>v[i].first >> v[i].second;

    for(int i=0;i<n;i++) 
    {
        if(v[i].second =="enter") answer.push_back(v[i].first);
        else if (v[i].second =="leave") answer.erase(remove(answer.begin(), answer.end(), v[i].first), answer.end());
    }

    sort(answer.begin(), answer.end(), greater<string>());

    for(int i=0;i<answer.size();i++) cout<< answer[i] << "\n";

}