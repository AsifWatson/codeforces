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

template <class T> inline T bigmod(T p,T e,T M,T ret=1)
{
    for(; e>0; e>>=1){if(e&1)ret=(ret*p)%M; p=(p*p)%M;}
    return ret;
}

template <class T> inline T gcd(T x,T y){if(y==0)return x; return gcd(y,x%y);}
template <class T> inline T lcm(T x,T y){return ((x/gcd(x,y))*y);}

bool Reverse(long long a,long long b){return a>b;}

bool compare(pair<long long,long long> a,pair<long long,long long> b)
{
    if(a.first==b.first)return a.second>b.second;
    return a.first<b.first;
}

int main()
{
    IOS

    string s,str,S;
    cin>>str;

    bool mark=true;
    for(auto ch : str)
    {
        if(ch=='1')mark=false;
        if(ch=='0' && mark)continue;
        s+=ch;
    }

    if(s != str)cout<<s<<endl;
    else
    {
        int zero=0;
        for(auto ch: s)
        {
            if(ch=='0')
            {
                zero++;
                if(zero==1)continue;
            }
            S+=ch;
        }
        if(zero>0)cout<<S<<endl;
        else
        {
            for(int i=1;i<S.size();i++)cout<<S[i];
        }
    }

    return 0;
}

