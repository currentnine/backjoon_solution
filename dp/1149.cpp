#include <iostream>
#include <algorithm>

using namespace std;

int n,d[1005][3], r[1005],g[1005],b[1005];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>n;
    for(int i = 1;i<=n;i++) cin >> r[i] >> g[i] >> b[i];
    d[1][0] = r[1];
    d[1][1] = g[1];
    d[1][2] = b[1];

    for(int i = 2;i<=n;i++){
        d[i][0] = min(d[i-1][1], d[i-1][2]) + r[i];
        d[i][1] = min(d[i-1][0], d[i-1][2]) + g[i];
        d[i][2] = min(d[i-1][0], d[i-1][1]) + b[i];
    }


    cout << *min_element(d[n], d[n]+3);

}


/*

2 * 3 rolling 배열

#include <iostream>
#include <algorithm>
using namespace std;

int n;
int r[1005], g[1005], b[1005];
int d[2][3]; // 현재와 이전만 저장

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 1; i <= n; i++) cin >> r[i] >> g[i] >> b[i];

    d[1][0] = r[1];
    d[1][1] = g[1];
    d[1][2] = b[1];

    for (int i = 2; i <= n; i++) {
        d[i % 2][0] = min(d[(i - 1) % 2][1], d[(i - 1) % 2][2]) + r[i];
        d[i % 2][1] = min(d[(i - 1) % 2][0], d[(i - 1) % 2][2]) + g[i];
        d[i % 2][2] = min(d[(i - 1) % 2][0], d[(i - 1) % 2][1]) + b[i];
    }

    int last = n % 2;
    cout << min({d[last][0], d[last][1], d[last][2]});
}
*/