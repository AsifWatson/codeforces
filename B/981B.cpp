#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long sum=0;
    map<int,int> m;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        m[a]=b;
        sum=sum+b;
    }
    int q;
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        if(m.end() == m.find(x))
        {
            m[x]=y;
            sum=sum+y;
            continue;
        }
        if(m.end() != m.find(x))
        {
            if(m[x]>y)
            {
                continue;
            }
            if(m[x]<y)
            {
                sum=sum+y-m[x];
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}
