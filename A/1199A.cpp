/***********************************************************|
|          /\           /-------|   -----    |-----------|  |
|         /  \         /              |      |              |
|        /    \       |               |      |              |
|       /      \      |----|          |      |-------|      |
|      / ------ \          |-----|    |      |              |
|     /          \               |    |      |              |
|    /            \              /    |      |              |
|  ---            --- |---------/   -----  -----            |
|                                                           |
|   Codeforces = Asif_Watson  ||  Codechef = asif_watson    |
|   Mail = ashfaqislam33@gmail.com                          |
|   CSTE,Noakhali Science and Technology University(11)     |
|                                                           |
************************************************************/


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
    int n,x,y;
    cin>>n>>x>>y;
    vector<int> a;
    for(int i=1;i<=n;i++)
    {
        int rains;
        cin>>rains;
        a.push_back(rains);
    }
    for(int i=0;i<a.size();i++)
    {
        bool prev=true,next=true;
        for(int j=i-1;j>=max(0,i-x);j--)
        {
            if(a[i]>=a[j])prev=false;
        }
        for(int j=i+1;j<=min((int)a.size()-1,i+y);j++)
        {
            if(a[i]>=a[j])next=false;
        }
        if(prev && next)
        {
            cout<<i+1<<endl;
            return 0;
        }
    }
    return 0;
}

