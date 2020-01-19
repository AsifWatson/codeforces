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
    int n,s;
    cin>>n>>s;
    int a[n+2],b[n+2];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
    }
    if(a[1]==0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    if(a[s]==1)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    if(b[s]==0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=s+1;i<=n;i++)
    {
        if(a[i]==1 && b[i]==1)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
