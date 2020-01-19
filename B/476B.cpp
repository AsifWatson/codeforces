/*****************************************************************|
|             /\         _______   ________   _________           |
|            /  \       /------ \ |___  ___| |  _______|          |
|           / /\ \      ||            ||     | |                  |
|          / /  \ \     ||______      ||     | |______            |
|         / /____\ \    \ ----- \     ||     |  ______|           |
|        / /------\ \          ||     ||     | |                  |
|       / /        \ \   ______||  ___||___  | |                  |
|      |_/          \_| \ ------/ |________| |_|                  |
|                                                                 |
|                                                                 |
|      Codeforces = Asif_Watson                                   |
|      Codechef   = asif_watson                                   |
|      UVa        = Asif_Watson                                   |
|      Mail       = ashfaqislam33@gmail.com                       |
|      CSTE, Noakhali Science and Technology University (11)      |
|                                                                 |
******************************************************************/

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

string s1, s2;
int pos1 = 0, pos2 = 0, what = 0, match = 0;

void backtrack(int totalWhat, int pos)
{
    if(totalWhat == 0){
            if(pos == pos1)
                ++match;

            return;
    }

    backtrack(totalWhat - 1, pos + 1);
    backtrack(totalWhat - 1, pos - 1);
}

int main()
{
    IOS

    cin >> s1;
    cin >> s2;

    for(int i = 0; i < s1.size(); ++i){
            if(s1[i] == '+')
                    ++pos1;
            if(s1[i] == '-')
                    --pos1;
    }

    for(int i = 0; i < s2.size(); ++i){
            if(s2[i] == '+')
                    ++pos2;
            if(s2[i] == '-')
                    --pos2;
            if(s2[i] == '?')
                    ++what;
    }

    if(what == 0)
    {
        if(pos1 == pos2) cout << "1.000000000000" << endl;
        else cout << "0.000000000000" << endl;
    }
    else
    {
        backtrack(what, pos2);

        cout << fixed << setprecision(12) << match / pow(2, what) << endl;
    }

    return 0;
}
