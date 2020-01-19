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
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define allre(v) v.rbegin(),v.rend()
#define sp(x,y) fixed<<setprecision(y)<<x
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))

using namespace std;

const double pi = acos(-1.0);
const double EPS = 1e-6;
const int MOD = (int)1e9+7;

template <class T> inline T gcd(T x,T y){if(y==0)return x; return gcd(y,x%y);}
template <class T> inline T lcm(T x,T y){return ((x/gcd(x,y))*y);}

bool Reverse(long long a,long long b){return a>b;}

bool compare(pair<long long,long long> a,pair<long long,long long> b)
{
    if(a.first==b.first)return a.second>b.second;
    return a.first<b.first;
}

int n,k1,k2;
queue<int> q1, q2;

void input()
{
    cin>>n;
    cin>>k1;
    for(int i=1;i<=k1;i++){int x; cin>>x; q1.push(x);}
    cin>>k2;
    for(int i=1;i<=k2;i++){int x; cin>>x; q2.push(x);}
}

void print(int moves, int player)
{
    cout<<moves<<" "<<player<<endl;
    exit(0);
}

void output()
{
    map<pair<queue<int>,queue<int>>,int> mp;
    mp[{q1,q2}]=1;

    int moves=0;

    while(true)
    {
        int num1=q1.front();
        q1.pop();
        int num2=q2.front();
        q2.pop();

        if(num1>num2){q1.push(num2);q1.push(num1);}
        else{q2.push(num1);q2.push(num2);}

        moves++;

        if(q1.empty())print(moves,2);
        if(q2.empty())print(moves,1);

        if(mp[{q1,q2}]){cout<<"-1"<<endl;exit(0);}
        else mp[{q1,q2}]=1;
    }
}

int main()
{
    IOS

    input();

    output();

    return 0;
}

