#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, num, a;
    cin>>n;
    queue <int> q;
    vector<pair<int,int>> v(n); // 식당입구
    for(int i=0;i<n;i++)
    {
        cin>>num;
        if(num==1) // 첫번째유형 a인 학생 1명 식당입구 맨뒤에 줄섬
        {
            cin >> a;
            q.push(a);
            v[i].second = a; //
        }
        else q.pop();    // 유형 2 대기한 한 명 식사 시작
            
        v[i].first -= q.size(); 
    }
    sort(v.begin(), v.end());
    cout<<v[0].first *(-1) << " " << v[0].second;

}