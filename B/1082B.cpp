#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define memo(a,b) memset((a),(b),sizeof(a))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
using namespace std;

const double pi = acos(-1.0);
const double EPS = 1e-6;
const int MOD = (int)1e9+7;

int main()
{
    IOS
    long long n,coun=0,counG=0,counS=0,ans=0;
    string s;
    cin>>n;
    cin>>s;
    vector<long long> v;
    vector<long long> v2;
    for(long long i=0;i<s.size();i++)
    {
        if(s[i]=='G')
        {
            counG++;
            coun++;
            continue;
        }
        if(s[i]=='S')
        {
            counS++;
            if(coun>0)
            {
                v.push_back(coun);
            }
            v.push_back(0);
            coun=0;
        }
    }
    if(coun>0)
    {
        v.push_back(coun);
    }
    if(counG==0 || counG==1 || counG==2 || counS==0)
    {
        cout<<counG<<endl;
        return 0;
    }
    //cout<<counG<<" "<<counS<<endl;
    for(int i=0;i<v.size();i++)
    {
        //cout<<v[i]<<" ";
        if(v[i]==0)
        {
            if(i==0)
            {
                v2.push_back(v[i+1]+1);
                continue;
            }
            if(i==v.size()-1)
            {
                v2.push_back(v[i-1]+1);
                continue;
            }
            v2.push_back(v[i-1]+v[i+1]+1);
        }
    }
    for(int i=0;i<v2.size();i++)
    {
        if(counG>=v2[i])
        {
            ans=max(ans,v2[i]);
        }
        else
        {
            ans=max(ans,v2[i]-1);
        }
        //cout<<v2[i]<<" ";
    }
    cout<<ans<<endl;
    return 0;
}
