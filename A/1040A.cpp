#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    IOS
    int n,a,b,sum=0;
    cin>>n>>a>>b;
    int arr[n+2];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int mid;
    if(n%2==0)
    {
        mid=n/2;
    }
    if(n%2==1)
    {
        mid=(n/2)+1;
    }
    for(int i=0;i<mid;i++)
    {
        if(arr[i]==0)
        {
            if(arr[n-1-i]==1)
            {
                cout<<"-1"<<endl;
                return 0;
            }
            if(arr[n-1-i]==2)
            {
                sum=sum+a;
            }
        }
        if(arr[i]==1)
        {
            if(arr[n-1-i]==0)
            {
                cout<<"-1"<<endl;
                return 0;
            }
            if(arr[n-1-i]==2)
            {
                sum=sum+b;
            }
        }
        if(arr[i]==2)
        {
            if(arr[n-1-i]==0)
            {
                sum=sum+a;
            }
            if(arr[n-1-i]==1)
            {
                sum=sum+b;
            }
            if(arr[n-1-i]==2)
            {
                if(n%2==1 && i==mid-1)
                {
                    sum=sum+min(a,b);
                    continue;
                }
                sum=sum+min(a,b)+min(a,b);
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}

