#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,c=0,z;
    int a[102];
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>k)
        {
            z=i-1;
            break;
        }
        if(a[i]<=k)
        {
            c++;
        }
    }
    if(c==n)
    {
        cout<<c<<endl;
        return 0;
    }
    for(int i=n-1;i>z;i--)
    {
        if(a[i]>k)
        {
            break;
        }
        if(a[i]<=k)
        {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
