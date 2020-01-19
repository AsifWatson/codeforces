#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define allre(v) v.rbegin(),v.rend()
#define sp(x,y) fixed<<setprecision(y)<<x
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define GCD(a,b) __gcd(a,b)
#define LCM(a,b) ((a*b)/__gcd(a,b))
using namespace std;

const double pi = acos(-1.0);
const double EPS = 1e-6;
const int MOD = (int)1e9+7;

bool Reverse(long long a,long long b){return a>b;}

map<int,int> mp;
map<pair<pair<int,string>,int >,int> M;
priority_queue<pair<int,string>,vector<pair<int,string> >, greater<pair<int,string> > >pq;

int main()
{
    IOS
    int n;
    cin>>n;
    vector<pair<int,string> >v;
    vector<int>v2;
    set<int> st;
    set<int> :: iterator it;
    for(int i=1;i<=n;i++)
    {
        string s;
        int x;
        cin>>s>>x;
        v.push_back({x,s});
        st.insert(x);
        if(!mp[x])mp[x]=1;
        else mp[x]++;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){if(v[i].first>i){cout<<"-1"<<endl; return 0;}}
    for(it=st.begin();it!=st.end();++it)v2.push_back(*it);
    vector<pair<pair<int,string>,int > >v3;
    int t=0;
    for(int i=0;i<v.size();i++)
    {
        int tot=mp[v[i].first];
        t+=tot;
        int value=n-t;
        for(int j=1;j<=tot;j++){v3.push_back({{v[i].first,v[i].second},++value});i++;}
        i--;
    }
    int idx=0,taken=0;
    for(int i=1;i<v2.size();i++)
    {
        int loop=v2[i]-taken,took=0;
        for(int j=1;j<=loop;j++)
        {
            if(j>mp[v2[i-1]])
            {
                pair<int,string> pairs=pq.top();
                cout<<pairs.second<<" "<<pairs.first<<endl;
                pq.pop();
                taken++;
                continue;
            }
            cout<<v3[idx].first.second<<" "<<v3[idx].second<<endl;
            M[v3[idx]]=1;idx++;taken++;took++;
        }
        for(int j=1;j<=mp[v2[i-1]]-took;j++)
        {
            pq.push({v3[idx].second,v3[idx].first.second});
            M[v3[idx]]=1;
            idx++;
        }
    }
    for(int i=0;i<v3.size();i++)if(!M[v3[i]])cout<<v3[i].first.second<<" "<<v3[i].second<<endl;
    while(!pq.empty())
    {
        pair<int,string> pairs=pq.top();
        cout<<pairs.second<<" "<<pairs.first<<endl;
        pq.pop();
    }
    return 0;
}
