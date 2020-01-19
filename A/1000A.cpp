#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int arr[101];
    int arr2[101];
    memset(arr,0, sizeof(arr));
    memset(arr2,0, sizeof(arr2));
    cin>>n;
    map<string,int> mp;
    mp["M"]=1;
    mp["S"]=2;
    mp["XS"]=3;
    mp["XXS"]=4;
    mp["XXXS"]=5;
    mp["L"]=6;
    mp["XL"]=7;
    mp["XXL"]=8;
    mp["XXXL"]=9;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        arr[mp[s]]++;
    }
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        arr2[mp[s]]++;
    }
    int sum=0;
    for(int i=1;i<=9;i++)
    {
        if(arr[i]>0 && arr2[i]>0)
        {
            if(arr[i]<arr2[i])
                sum=sum+arr[i];
            else if(arr[i]>arr2[i])
                sum=sum+arr2[i];
            else if(arr[i]==arr2[i])
                sum=sum+arr[i];
        }
    }
    cout<<n-sum<<endl;
    return 0;
}
