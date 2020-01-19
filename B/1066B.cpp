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
    int n,r;
    cin>>n>>r;
    int a[n+5];
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    int ability,first,need=0,high,low,mark=0,lastOne;



    ability=(((r-1)*2)+1);
    first=(ability/2)+1;


    for(int i=min(n,first); i>=1; i--)
    {
        if(a[i]==1)
        {
            need++;
            low=i+first;
            high=low+first-1;
            lastOne=i;
            break;
        }
    }
    if(need==0)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    if(low>n)
    {
        cout<<need<<endl;
        return 0;
    }
    while(true)
    {
        mark=0;
        for(int i=min(high,n); i>=low; i--)
        {
            if(a[i]==1)
            {
                mark=1;
                need++;
                low=i+first;
                high=low+first-1;
                lastOne=i;
                break;
            }
        }
        if(mark==0)
        {
            for(int i=min(n,lastOne+first-1);i>lastOne;i--)
            {
                if(a[i]==1)
                {
                    mark=1;
                    need++;
                    low=i+first;
                    high=low+first-1;
                    lastOne=i;
                    break;
                }
            }
        }
        if(mark==0)
        {
            cout<<"-1"<<endl;
            return 0;
        }
        if(low>n)
        {
            break;
        }
    }
    cout<<need<<endl;
    return 0;
}
