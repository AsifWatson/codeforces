/************************************************************|
|          /\           /-------|   -----    |-----------|   |
|         /  \         /              |      |               |
|        /    \       |               |      |               |
|       /      \      |----|          |      |-------|       |
|      / ------ \          |-----|    |      |               |
|     /          \               |    |      |               |
|    /            \              /    |      |               |
|  ---            --- |---------/   -----  -----             |
|                                                            |
|    codeforces = Asif_Watson  ||  codechef = asif_watson    |
|    mail = ashfaqislam33@gmail.com                          |
|    CSTE,Noakhali Science and Technology University(11)     |
|                                                            |
*************************************************************/

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

int main()
{
    IOS
    list<int> lst;
    vector<int>v;
    int n;
    cin>>n;
    int a[n+2];
    for(int i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
    {
        if(i%2)lst.push_back(a[i]);
        else lst.push_front(a[i]);
    }
    for(auto it=lst.begin();it!=lst.end();it++)
    {
        v.push_back(*it);
    }
    bool ok=true;
    for(int i=1;i<v.size()-1;i++)
    {
        if(v[i]>=v[i-1]+v[i+1])
        {
            ok=false;
        }
    }
    if(v[0]>=v[1]+v[v.size()-1])ok=false;
    if(v[v.size()-1]>=v[v.size()-2]+v[0])ok=false;
    if(!ok)cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(int x:v)cout<<x<<" ";
    }
    return 0;
}

