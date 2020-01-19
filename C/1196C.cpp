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

int upor,nich,bam,dan;

bool inside(int x, int y)
{
    return ((x>=bam && x<=dan) && (y>=nich && y<=upor));
}

bool canGoInside(int x, int y, int Bam, int Dan, int Upor, int Nich)
{
    if((x<bam && (y<=upor && y>=nich)) && Dan)return true;///1
    if((x>dan && (y<=upor && y>=nich)) && Bam)return true;///2
    if(((x>=bam && x<=dan) && y>upor) && Nich)return true;///3
    if(((x>=bam && x<=dan) && y<nich) && Upor)return true;///4
    if((x<bam && y>upor) && Nich && Dan)return true;///5
    if((x>dan && y>upor) && Bam && Nich)return true;///6
    if((x<bam && y<nich) && Dan && Upor)return true;///7
    if((x>dan && y<nich) && Bam && Upor)return true;///8
    return false;
}

void update(int x, int y, int Bam, int Dan, int Upor, int Nich)
{
    if(Bam==0)bam=max(x,bam);
    if(Dan==0)dan=min(x,dan);
    if(Upor==0)upor=min(y,upor);
    if(Nich==0)nich=max(y,nich);
}

int main()
{
    IOS

    int q;
    cin>>q;
    while(q--)
    {
        int n,mark=1;
        upor=100000,nich=-100000,dan=100000,bam=-100000;
        cin>>n;
        while(n--)
        {
            int x,y,f1,f2,f3,f4;
            cin>>x>>y>>f1>>f2>>f3>>f4;
            if(!mark)continue;
            if(f1==1 && f2==1 && f3==1 && f4==1)continue;
            else
            {
                if(inside(x,y))update(x,y,f1,f3,f2,f4);
                else if(canGoInside(x,y,f1,f3,f2,f4))update(x,y,f1,f3,f2,f4);
                else mark=0;
            }
        }
        if(!mark)cout<<"0"<<endl;
        else cout<<"1 "<<dan<<" "<<upor<<endl;
    }

    return 0;
}
