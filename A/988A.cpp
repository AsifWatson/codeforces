#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    int arr[110];
    set<int> s;
    vector<int> v;
    cin>>n>>k;
    int siz=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        s.insert(arr[i]);
        if(s.size()>siz)
        {
            v.push_back(i+1);
            siz++;
        }
    }
    if(s.size()<k)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        for(int i=0;i<k-1;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<v[k-1]<<endl;
    }
}
