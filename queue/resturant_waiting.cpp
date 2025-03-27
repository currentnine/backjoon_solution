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
    vector<pair<int,int>> v(n); // �Ĵ��Ա�
    for(int i=0;i<n;i++)
    {
        cin>>num;
        if(num==1) // ù��°���� a�� �л� 1�� �Ĵ��Ա� �ǵڿ� �ټ�
        {
            cin >> a;
            q.push(a);
            v[i].second = a; //
        }
        else q.pop();    // ���� 2 ����� �� �� �Ļ� ����
            
        v[i].first -= q.size(); 
    }
    sort(v.begin(), v.end());
    cout<<v[0].first *(-1) << " " << v[0].second;

}