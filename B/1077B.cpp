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
    int n,coun=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<n-1;i++)
    {
        if(a[i]==0)
        {
            if(a[i-1]==1 && a[i+1]==1)
            {
                coun++;
                a[i+1]=0;
            }
        }
    }
    cout<<coun<<endl;
    return 0;
}
