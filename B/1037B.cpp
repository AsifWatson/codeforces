#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(false); cout.tie(false);
    int n,s;
    long long sum=0;
    cin>>n>>s;
    int a[n+2];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int mid=n/2;
    if(s>a[mid])
    {
        for(int i=mid;i<n;i++)
        {
            if(a[i]>s || a[i]==s)
            {
                break;
            }
            if(a[i]<s)
            {
                sum=sum+abs(s-a[i]);
            }
        }
    }
    if(s<a[mid])
    {
        for(int i=mid;i>=0;i--)
        {
            if(a[i]<s || a[i]==s)
            {
                break;
            }
            if(a[i]>s)
            {
                sum=sum+abs(s-a[i]);
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}
