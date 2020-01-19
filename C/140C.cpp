#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define allre(v) v.rbegin(),v.rend()
#define sp(x,y) fixed<<setprecision(y)<<x
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define GCD(a,b) __gcd(a,b)
#define LCM(a,b) ((a*b)/__gcd(a,b) )
using namespace std;

const double pi = acos(-1.0);
const double EPS = 1e-6;
const int MOD = (int)1e9+7;

bool Reverse(long long a,long long b)
{
    return a>b;
}

int main()
{
    IOS
    int n;
    cin>>n;
    int a[n+1],arr[n+1];
    map<int,int> mp;
    set<int> st;
    set<int> :: iterator it;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        st.insert(x);
        if(!mp[x])mp[x]=1;
        else mp[x]++;
    }
    priority_queue<pair<int,int> > pq;
    int idx=1,ans=0;
    for(it=st.begin();it!=st.end();++it)
    {
        pq.push({mp[*it],*it});
    }
    while(pq.size()>=3)
    {

        pair<int,int> p=pq.top();
        pq.pop();
        arr[idx++]=p.second;
        mp[p.second]--;

        pair<int,int> q=pq.top();
        pq.pop();
        arr[idx++]=q.second;
        mp[q.second]--;

        pair<int,int> r=pq.top();
        pq.pop();
        arr[idx++]=r.second;
        mp[r.second]--;

        if(mp[p.second])pq.push({mp[p.second],p.second});
        if(mp[q.second])pq.push({mp[q.second],q.second});
        if(mp[r.second])pq.push({mp[r.second],r.second});
    }
    for(int i=1;i<idx;i+=3)
    {
        if(arr[i]!=arr[i+1] && arr[i+1]!=arr[i+2] && arr[i]!=arr[i+2])ans++;
    }
    cout<<ans<<endl;
    if(!ans)return 0;
    for(int i=1;i<idx;i+=3)
    {
        if(arr[i]!=arr[i+1] && arr[i+1]!=arr[i+2] && arr[i]!=arr[i+2])
        {
            vector<int>v;
            v.push_back(arr[i]);
            v.push_back(arr[i+1]);
            v.push_back(arr[i+2]);
            sort(allre(v));
            for(int j=0;j<v.size();j++)cout<<v[j]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
