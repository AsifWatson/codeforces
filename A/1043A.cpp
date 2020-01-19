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
    int n,mx=0,sum1=0,sum2=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum1=sum1+a[i];
        mx=max(a[i],mx);
    }
    for(int i=mx;;i++)
    {
        sum2=0;
        for(int j=0;j<n;j++)
        {
            sum2=sum2+(i-a[j]);
        }
        if(sum2>sum1)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}
