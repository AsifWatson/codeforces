#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,maxx=0;
    int a[101];
    int c[102];
    for(int i=0;i<102;i++)
    {
        c[i]=0;
    }
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        c[a[i]]++;
    }
    for(int i=1;i<=100;i++)
    {
        if(c[i]>maxx)
        {
            maxx=c[i];
        }
    }
    cout<<maxx<<endl;
    return 0;
}
