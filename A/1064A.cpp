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
    int a,b,c;
    cin>>a>>b>>c;
    int maxx,sum,sum2;
    maxx=max3(a,b,c);
    sum=a+b+c;
    sum2=sum-maxx;
    if(sum2<=maxx)
    {
        cout<<maxx+1-(sum2)<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
    return 0;
}
