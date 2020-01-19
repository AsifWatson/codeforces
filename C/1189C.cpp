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

int arr[100005],ans;

int main()
{
    IOS
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>arr[i];
    for(int i=2;i<=n;i++)
    {
        arr[i]+=arr[i-1];
    }
    int q;
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        int l,r;
        cin>>l>>r;
        ans=(arr[r]-arr[l-1])/10;
        cout<<ans<<endl;
    }
    return 0;
}

