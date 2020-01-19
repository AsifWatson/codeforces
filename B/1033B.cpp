#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1.0)
#define memo(a,b) memset((a),(b),sizeof(a))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
using namespace std;
#define N 1000000

bool mark [N];
vector <long long int> primeList;

void sieve ()
{
    memset(mark, true, sizeof (mark));
    mark [0] = mark [1] = false;

    for(int i=4;i<N;i+=2)mark[i]=false;

    for(int i=3;i*i<=N;i++ )
    {
        if(mark[i])
        {
            for(int j=i*i;j<N;j+=2*i)mark[j]=false;
        }
    }
    primeList.push_back(2);

    for(int i=3;i<N;i+=2)
    {
        if(mark[i])primeList.push_back(i);
    }
}

bool isPrime(long long int n)
{
    if (n<N) return mark[n];

    long long int index = 0;

    while (primeList[index]*primeList[index]<=n)
    {
        if (n%primeList[index]==0) return false;
        index++;
    }

    return true;
}

int main()
{
    IOS
    int t;
    cin>>t;
    sieve();
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        if(a-b>1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else if(a-b==1)
        {
            if(isPrime(a+b)) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
