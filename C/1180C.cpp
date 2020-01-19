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

deque<long long>dq;
map<long long,pair<long long,long long> >mp;
vector<long long>v;

int main()
{
    IOS
    long long n,q,mx=INT_MIN,idx=1;
    cin>>n>>q;
    for(int i=1;i<=n;i++)
    {
        long long x;
        cin>>x;
        mx=max(mx,x);
        dq.push_back(x);
    }
    while(true)
    {
        long long a=dq.front();
        dq.pop_front();
        long long b=dq.front();
        dq.pop_front();

        mp[idx++]={a,b};
        //cout<<a<<" "<<b<<endl;

        if(a<b)swap(a,b);

        dq.push_front(a);
        dq.push_back(b);

        if(a==mx)break;
    }
    idx--;
    for(auto it=dq.begin();it!=dq.end();it++)v.push_back(*it);
    //for(int i=1;i<v.size();i++)cout<<v[i]<<" ";
   // cout<<endl;
    while(q--)
    {
        long long operation;
        cin>>operation;
        if(operation<=idx)cout<<mp[operation].first<<" "<<mp[operation].second<<endl;
        else
        {
            long long operation_left=operation-idx;
            ///cout<<operation_left<<endl;
            long long index=operation_left%(n-1);
            if(index==0)index=n-1;
            cout<<mx<<" "<<v[index]<<endl;
        }
    }
    return 0;
}
