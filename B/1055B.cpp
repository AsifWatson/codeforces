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
    int n,m,l,coun=0;
    cin>>n>>m>>l;
    int a[n+2];
    int b[n+2];
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(a[i]>l)
        {
            b[i]=1;
            continue;
        }
        b[i]=0;
    }
    for(int i=1; i<=n-1; i++)
    {
        if(b[i]==1 && b[i+1]==0)
        {
            coun++;
        }
    }
    if(b[n]==1)
    {
        coun++;
    }
    if(n==1)
    {
        for(int i=1; i<=m; i++)
        {
            int x,y,z;
            cin>>x;
            if(x==0)
            {
                cout<<coun<<endl;
            }
            if(x==1)
            {
                cin>>y>>z;
                if(a[y]>l)
                {
                    continue;
                }
                a[y]=a[y]+z;
                if(a[y]>l)
                {
                    b[y]=1;
                    coun++;
                }
            }
        }
    }
    if(n==2)
    {
        for(int i=1; i<=m; i++)
        {
            int x,y,z;
            cin>>x;
            if(x==0)
            {
                cout<<coun<<endl;
            }
            if(x==1)
            {
                cin>>y>>z;
                if(a[y]>l)
                {
                    continue;
                }
                a[y]=a[y]+z;
                if(a[y]>l)
                {
                    b[y]=1;
                    if(y==1)
                    {
                        if(b[y+1]==0)
                        {
                            coun++;
                        }
                    }
                    if(y==2)
                    {
                        if(b[y-1]==0)
                        {
                            coun++;
                        }
                    }
                }
            }
        }
    }
    if(n>2)
    {
        for(int i=1; i<=m; i++)
        {
            int x,y,z;
            cin>>x;
            if(x==0)
            {
                cout<<coun<<endl;
            }
            if(x==1)
            {
                cin>>y>>z;
                if(a[y]>l)
                {
                    continue;
                }
                a[y]=a[y]+z;
                if(a[y]>l)
                {
                    b[y]=1;
                    if(y>1 && y<n)
                    {
                        if(b[y-1]==0 && b[y+1]==0)
                        {
                            coun++;
                        }
                        if(b[y-1]==1 && b[y+1]==1)
                        {
                            coun--;
                        }
                    }
                    if(y==1)
                    {
                        if(b[y+1]==0)
                        {
                            coun++;
                        }
                    }
                    if(y==n)
                    {
                        if(b[y-1]==0)
                        {
                            coun++;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
