#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX = 1000000;
bool is_prime[MAX + 1];  

void make_prime_table() {
    for (int i = 0; i <= MAX; i++) is_prime[i] = true;
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= MAX; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                is_prime[j] = false;  // ¼Ò¼ö ¾Æ´Ô
            }
        }
    }
}

int main()
{
    int t,n;
    cin>>t;
    make_prime_table();
    while(t--){
        int answer = 0;
        cin>>n;
        for(int i = 2;i<=n/2;i++){
            if(is_prime[i]&&is_prime[n-i]) answer++;

        }
        cout<<answer<<"\n";
    }
}