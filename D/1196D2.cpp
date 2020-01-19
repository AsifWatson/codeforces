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

    int q;
    cin>>q;
    while(q--)
    {
        int n,k;
        cin>>n>>k;
        int RGB[n+5],GBR[n+5],BRG[n+5];

        memset(RGB,0,sizeof(RGB));
        memset(GBR,0,sizeof(GBR));
        memset(BRG,0,sizeof(BRG));

        string s;
        cin>>s;
        s="#"+s;

        for(int i=1;i<s.size();i++)
        {
            if(i%3==1)
            {
                if(s[i]!='R')RGB[i]=RGB[i-1]+1;
                if(s[i]=='R')RGB[i]=RGB[i-1];
                if(s[i]!='G')GBR[i]=GBR[i-1]+1;
                if(s[i]=='G')GBR[i]=GBR[i-1];
                if(s[i]!='B')BRG[i]=BRG[i-1]+1;
                if(s[i]=='B')BRG[i]=BRG[i-1];
            }
            if(i%3==2)
            {
                if(s[i]!='G')RGB[i]=RGB[i-1]+1;
                if(s[i]=='G')RGB[i]=RGB[i-1];
                if(s[i]!='B')GBR[i]=GBR[i-1]+1;
                if(s[i]=='B')GBR[i]=GBR[i-1];
                if(s[i]!='R')BRG[i]=BRG[i-1]+1;
                if(s[i]=='R')BRG[i]=BRG[i-1];
            }
            if(i%3==0)
            {
                if(s[i]!='B')RGB[i]=RGB[i-1]+1;
                if(s[i]=='B')RGB[i]=RGB[i-1];
                if(s[i]!='R')GBR[i]=GBR[i-1]+1;
                if(s[i]=='R')GBR[i]=GBR[i-1];
                if(s[i]!='G')BRG[i]=BRG[i-1]+1;
                if(s[i]=='G')BRG[i]=BRG[i-1];
            }
        }

        ///cout<<"    RGB  "<<"GBR  "<<"BRG"<<endl;
        int ans=INT_MAX;
        for(int i=k;i<=n;i++)
        {
            ans=min(ans,(RGB[i]-RGB[i-k]));
            ans=min(ans,(GBR[i]-GBR[i-k]));
            ans=min(ans,(BRG[i]-BRG[i-k]));
            ////cout<<i<<"    "<<RGB[i]<<"     "<<GBR[i]<<"    "<<BRG[i]<<endl;
        }
        cout<<ans<<endl;
    }

    return 0;
}

