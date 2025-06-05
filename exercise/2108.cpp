#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int n;
vector<int>v;

int main(){
    int tmp, range, middle = 0, most_val, mean = 0, most = -9999, number[8001] = {};
    bool ans = false;
    cin>>n;
    for(int i = 0; i<n;i++){
        cin >> tmp;
        v.push_back(tmp);
        mean+=tmp;
        number[tmp+4000]++;
    }
    sort(v.begin(), v.end());
    for(int i = 0;i<8001;i++){
        if(number[i] == 0) continue;
        if(number[i] == most){
            if (ans){
                most_val = i-4000;
                ans = false;
            }
        }
        if(number[i]>most){
            most = number[i];
            most_val = i -4000;
            ans = true;
        }
    }

    middle = v[v.size()/2];
    mean = round((float)mean / n);
    range = v.back() - v.front();
    cout<<mean << "\n";
    cout<<middle << "\n";
    cout<<most_val << "\n";
    cout<<range << "\n";

}