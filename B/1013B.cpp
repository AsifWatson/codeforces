#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    int a[100005];
    int mark[100005];
    int mark1[100005];
    for(int i=0;i<100005;i++)
    {
        mark[i]=0;
        mark1[i]=0;
    }
    cin>>n>>x;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mark[a[i]]=1;
    }
    sort(a,a+n);
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
        {
            cout<<"0"<<endl;
            return 0;
        }
    }
    for(int i=0;i<n;i++)
    {
        int an=(a[i] & x);
        if(an!=a[i])
        {
            if(mark[an]==1)
            {
                cout<<"1"<<endl;
                return 0;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        int an=(a[i] & x);
        if(mark1[an]==1)
        {
            cout<<"2"<<endl;
            return 0;
        }
        mark1[an]=1;
    }
    cout<<"-1"<<endl;
    return 0;
}
