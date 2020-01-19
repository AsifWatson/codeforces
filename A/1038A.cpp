#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int a[26];
int main()
{
    IOS
    int n,k,minn=200010;
    cin>>n>>k;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        a[s[i]-'A']++;
    }
    for(int i=0;i<k;i++)
    {
        if(a[i]<minn)
        {
            minn=a[i];
        }
    }
    cout<<minn*k<<endl;
    return 0;
}

