#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,z=0;
    int arr[12];
    cin>>n>>m;
    map<int,int> mp;
    vector<int> vec;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<m;i++)
    {
        int a;
        cin>>a;
        mp[a]=++z;
    }
    for(int i=0;i<n;i++)
    {
        if(mp.find(arr[i])!=mp.end())
        {
            vec.push_back(arr[i]);
        }
    }
    if(vec.size()==0)
    {
        cout<<endl;
        return 0;
    }
    cout<<vec[0];
    for(int i=1;i<vec.size();i++)
    {
        cout<<" "<<vec[i];
    }
    return 0;
}
