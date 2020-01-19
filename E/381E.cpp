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
|   CSTE, Noakhali Science and Technology University(11)    |
|                                                           |
************************************************************/

#include "bits/stdc++.h"
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define allre(v) v.rbegin(),v.rend()
#define sp(x,y) fixed<<setprecision(y)<<x
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))

const double pi = acos(-1.0);
const double EPS = 1e-6;
const int MOD = (int)1e9+7;

long long bigmod(long long b, long long p, long long m)
{
    if(p==0)return 1;
    if(p%2==0)
    {
        long long c = bigmod(b, p/2, m);
        return ((c%m)*(c%m))%m;
    }
    else return ((b%m)*(bigmod(b, p-1, m)))%m;
}

template <class T> inline T gcd(T x,T y){if(y==0)return x; return gcd(y,x%y);}
template <class T> inline T lcm(T x,T y){return ((x/gcd(x,y))*y);}

bool Reverse(long long a,long long b){return a>b;}

bool compare(pair<long long,long long> a,pair<long long,long long> b)
{
    if(a.first==b.first)return a.second>b.second;
    return a.first<b.first;
}

#define maxn 1000005

struct Data
{
    int Open,Close,Max;
    Data(){}
    Data(int a,int b,int c){Open=a;Close=b;Max=c;}
};

string s;
Data tree[4*maxn];

Data Merge(Data a, Data b)
{
    int fullBalance=min(a.Open,b.Close);
    int OpenLeft=a.Open+b.Open-fullBalance;
    int CloseLeft=a.Close+b.Close-fullBalance;
    return Data(OpenLeft,CloseLeft,a.Max+b.Max+fullBalance*2);
}

void build(int node, int L, int R)
{
    if(L==R){tree[node]=(s[L]=='('?Data(1,0,0):Data(0,1,0));return;}
    int leftNode=node*2;
    int rightNode=node*2+1;
    int mid=(L+R)/2;
    build(leftNode,L,mid);
    build(rightNode,mid+1,R);
    tree[node]=Merge(tree[leftNode],tree[rightNode]);
}

Data query(int node, int L, int R, int l, int r)
{
    if(l>R || r<L)return Data(0,0,0);
    if(L>=l && R<=r)return tree[node];
    int leftNode=node*2;
    int rightNode=node*2+1;
    int mid=(L+R)/2;
    Data p1=query(leftNode,L,mid,l,r);
    Data p2=query(rightNode,mid+1,R,l,r);
    return Merge(p1,p2);
}

int main()
{
    IOS
    cin>>s;
    int Size=s.size();
    s=" "+s;

    build(1,1,Size);

    int q;
    cin>>q;

    while(q--)
    {
        int L,R;
        cin>>L>>R;
        cout<<query(1,1,Size,L,R).Max<<endl;
    }

    return 0;
}
