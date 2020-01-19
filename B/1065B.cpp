#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1.0)
#define memo(a,b) memset((a),(b),sizeof(a))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
using namespace std;

long long minG(long long n,long long m)
{
    return (n-(m*2));
}

int main()
{
    IOS
    long long n,m,minn=0,maxx,num;
    cin>>n>>m;
    if(m==0 || n==1)
    {
        cout<<n<<" "<<n<<endl;
        return 0;
    }
    if(m==1)num=2;
    if(m==2)num=3;
    if(m==3)num=3;
    if(m>3)
    {
        for(long long i=1; i<=n; i++)
        {
            long long total=(i*(i-1))/2;
            if(total>=m)
            {
                num=i;
                break;
            }
        }
    }

    if(2*m<n)
    {
        minn=minG(n,m);
    }
    maxx=n-num;
    if(maxx<0)
    {
        maxx=0;
    }
    cout<<minn<<" "<<maxx<<endl;
    return 0;
}
