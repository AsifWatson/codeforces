#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    IOS
    int n;
    cin>>n;
    int a[n+2];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int c=1;
    int mx=1;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]*2 < a[i+1])
        {
            if(c>mx)
            {
                mx=c;
            }
            c=1;
            continue;
        }
        if(a[i]*2 >= a[i+1])
        {
            c++;
        }
    }
    mx=max(c,mx);
    cout<<mx<<endl;
    return 0;
}
