#include <iostream>
#include <vector>
using namespace std;

const int MAX = 246912;
vector<bool> is_prime(MAX+1, true);

void init_prime(){
    is_prime[0] = is_prime[1] =  false;
    for(long long i=2;i*i<=MAX;i++)
    {
        if(is_prime[i]) 
        {
            for(int j = i*i;j<=MAX; j+=i) 
                is_prime[j] = false;
        }
    }
}

int main()
{
    long long n;
    init_prime();

    while(cin>>n&&n!=0)
    {
        long long answer =0;
        for(int i=n+1;i<=2*n;i++)
        {
            if(is_prime[i]) answer++;
        }
        cout<<answer<<"\n";
    }
}

