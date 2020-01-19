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

bool compare(pair<long long,long long> a,pair<long long,long long> b)
{
    if(a.first==b.first)return a.second>b.second;
    return a.first<b.first;
}

vector<pair<int,int> >v[2],sorted,unsorted;

int main()
{
    IOS
    int n,m,left,right;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int t,l,r;
        cin>>t>>l>>r;
        v[t].push_back({l,r});
    }

    sort(v[0].begin(),v[0].end());
    sort(v[1].begin(),v[1].end());
    if(v[1].size())
    {
        left=v[1][0].first,right=v[1][0].second;
        for(int i=1;i<v[1].size();i++)
        {
            if(v[1][i].first>right)
            {
                ///cout<<"Hey BRO!"<<endl;
                sorted.push_back({left,right});
                left=v[1][i].first,right=v[1][i].second;
            }
            if(v[1][i].first<=right)
            {
                if(v[1][i].second>right)right=v[1][i].second;
            }
           /// cout<<left<<" "<<right<<endl<<endl;
            ///cout<<v[1][i].first<<" "<<v[1][i].second<<endl;
        }
        sorted.push_back({left,right});
    }

    for(int i=0;i<v[0].size();i++)
    {
        left=v[0][i].first,right=v[0][i].second;
        for(int j=0;j<sorted.size();j++)
        {
            if(sorted[j].first<=left && sorted[j].second>=right)
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }

    cout<<"YES"<<endl;
    int arr[n+10];
    int num=10000;
    for(int i=1;i<=n;i++)arr[i]=--num;
    for(int i=0;i<sorted.size();i++)
    {
        for(int j=sorted[i].first;j<=sorted[i].second;j++)
        {
            arr[j]=arr[sorted[i].first];
        }
    }
    for(int i=1;i<=n;i++)cout<<arr[i]<<" ";

    return 0;
}
