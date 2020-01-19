#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans,flag=0,c=0,ans2;
    int minn=1000000007;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]<i+1)
        {
            ans=i+1;
            c++;
            flag=1;
            if(c==1)
            {
                ans2=ans;
            }
        }
        if(arr[i]<minn)
        {
            minn=arr[i];
        }
    }
    if(flag==1)
    {
        cout<<ans2<<endl;
        return 0;
    }
    int div;
    div=minn/n;
    if(div==0)
    {
        for(int i=0; i<n; i++)
        {
            arr[i]=arr[i]-n;
            if(arr[i]<0)
            {
                arr[i]=0;
            }
            if(arr[i]<i+1)
            {
                ans=i+1;
                break;
            }
        }
        cout<<ans<<endl;
        return 0;
    }
    for(int i=0; i<n; i++)
    {
        arr[i]=arr[i]-div*n;
        if(arr[i]<i+1)
        {
            ans=i+1;
            flag=2;
            break;
        }
    }
    if(flag==2)
    {
        cout<<ans<<endl;
        return 0;
    }
    for(int i=0; i<n; i++)
    {
        arr[i]=arr[i]-n;
        if(arr[i]<0)
        {
            arr[i]=0;
        }
        if(arr[i]<i+1)
        {
            ans=i+1;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
