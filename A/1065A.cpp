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
        long long s,a,b,c;
        cin>>s>>a>>b>>c;
        long long tot,total;
        tot=s/c;
        total=(tot/a)*b;
        cout<<total+tot<<endl;
    }
    return 0;
}

