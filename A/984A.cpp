#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[1010];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(n==1)
    {
        cout<<arr[0]<<endl;
        return 0;
    }
    sort(arr,arr+n);
    if(n==2)
    {
        if(arr[0]<arr[1])
        {
            cout<<arr[0]<<endl;
        }
        else
        {
            cout<<arr[1]<<endl;
        }
        return 0;
    }
    if(n%2==0)
    {
        cout<<arr[(n/2)-1]<<endl;
        return 0;
    }
    if(n%2==1)
    {
        cout<<arr[n/2]<<endl;
    }
    return 0;
}
