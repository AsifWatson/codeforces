#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,coun=0;
    int a[102];
    cin>>n;
    string s;
    cin>>s;
    vector<int> v;
    for(int i=0;i<=s.size();i++)
    {
        if(s[i]=='x')
        {
            coun++;
        }
        if(s[i]!='x')
        {
            if(coun>0)
                v.push_back(coun);
            coun=0;
        }
    }
    int ans=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>2)
        {
            ans=ans+(v[i]-2);
        }
    }
    cout<<ans<<endl;
    return 0;
}
