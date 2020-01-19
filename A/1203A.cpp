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
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int q;
    cin>>q;

    while(q--)
    {
        int n;
        cin>>n;

        int a[n];

        for(int i=0;i<n;i++)cin>>a[i];

        bool clockwise=true;
        for(int i=0;i<n-1;i++)
        {
            if(a[i] == n)
            {
                if(a[i+1] != 1)clockwise=false;
                continue;
            }
            if(a[i+1]-a[i] != 1)clockwise=false;
        }

        bool anticlockwise=true;
        for(int i=0;i<n-1;i++)
        {
            if(a[i] == 1)
            {
                if(a[i+1] != n)anticlockwise=false;
                continue;
            }
            if(a[i]-a[i+1] != 1)anticlockwise=false;
        }

        if(clockwise || anticlockwise)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}

