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
    int n,one=0,zero=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')zero++;
        if(s[i]=='1')one++;
    }
    if(one!=zero)cout<<1<<endl<<s<<endl;
    else
    {
        cout<<2<<endl<<s[0]<<" ";
        for(int i=1;i<s.size();i++)cout<<s[i];
    }
    return 0;
}

