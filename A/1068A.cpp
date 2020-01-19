#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1.0)
#define memo(a,b) memset((a),(b),sizeof(a))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
using namespace std;

int main()
{
    IOS
    long long N,M,K,L;
    long long coin;
    cin>>N>>M>>K>>L;

    if(M>N || K+L>N)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    if(M<=N && L<=N)
    {
        if(M*(((K+L-1)/M)+1)>N)
        {
            cout<<"-1"<<endl;
            return 0;
        }
        cout<<((K+L-1)/M)+1<<endl;
    }
    return 0;
}
