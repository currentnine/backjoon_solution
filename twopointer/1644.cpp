#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;
vector<int> v;

void eratos(int n){
    vector<bool> prime(n + 1, true);
    for(int i = 2; i <= n ; i++){
        if(prime[i]){
            for(int j = i*i; j<=n; j+=i) prime[j] = false;
        }
    }

    for(int i = 2; i<=n; i++) if(prime[i]) v.push_back(i);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    if(n == 1){
        cout << 0; 
        return 0;
    }

    eratos(n);

    int s = v.size();

    int answer = 0, st = 0, en = 0, sum = 0;

    while(en <=s){
        if(sum >=n) sum -= v[st++];
        if(sum < n) sum += v[en++];
        if(sum==n) answer++;
    }

    cout << answer;

}