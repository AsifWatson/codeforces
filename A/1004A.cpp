#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d,coun=2;
    int a[102];
    cin>>n>>d;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(a[i+1]-a[i]==2*d)
        {
            coun++;
        }
        if(a[i+1]-a[i]>2*d)
        {
            coun=coun+2;
        }
    }
    cout<<coun<<endl;
    return 0;
}
