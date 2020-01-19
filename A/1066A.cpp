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
    int t;
    cin>>t;
    while(t--)
    {
        long long L,v,l,r,initial,mod,v1,vv1,vv2,n;
        cin>>L>>v>>l>>r;
        initial=L/v;
        mod=l%v;
        v1=v-mod;
        vv1=v1+l;
        if(mod==0)
        {
            vv1=l;
        }
        vv2=r-vv1;
        n=vv2/v;
        n++;
        if(vv1>r)
        {
            n=0;
        }
        cout<<initial-n<<endl;
    }
    return 0;
}

