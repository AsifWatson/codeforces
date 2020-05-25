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

#define IOS                   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define Iterate(st,it)        for(auto it=st.begin();it!=st.end();it++)
#define Iteratere(st,it)      for(auto it=st.rbegin();it!=st.rend();it++)

#define All(v)                v.begin(),v.end()
#define Allre(v)              v.rbegin(),v.rend()
#define Unique(v)             sort(All(v)),v.erase(unique(All(v)),v.end())
#define Mem(Array,Value,Size) for(int i=0;i<Size;i++)Array[i]=Value
#define Sp(y)                 fixed<<setprecision(y)

#define Max3(a,b,c)           max(a,max(b,c))
#define Max(v)                *max_element(All(v))
#define Min3(a,b,c)           min(a,min(b,c))
#define Min(v)                *min_element(All(v))

typedef long long i64;

const double Pi = acos(-1.0);
const double Eps = 1e-6;
const int Mod = (int)1e9+7;
const i64 Inf = 1e9;

i64 Bigmod(i64 b, i64 p, i64 m)
{
    if(p==0)return 1LL;
    if(p%2==0)
    {
        i64 c = Bigmod(b, p/2, m);
        return ((c%m)*(c%m))%m;
    }
    else return ((b%m)*(Bigmod(b, p-1, m)))%m;
}

i64 ModInverse(i64 a, i64 M){return Bigmod(a, M-2, M);}  /// M is prime

template <class T> inline T GCD(T x,T y){if(y==0)return x; return GCD(y,x%y);}
template <class T> inline T LCM(T x,T y){return ((x/GCD(x,y))*y);}

bool Reverse(i64 a, i64 b){return a > b;}

bool Compare(pair<i64,i64> a, pair<i64,i64> b)
{
    if(a.first == b.first) return a.second > b.second;
    return a.first < b.first;
}

int main()
{
    IOS

    i64 n, ans = Inf;
    cin >> n;

    map <string,i64> mp;
    set <char> st;

    for(int i=1; i<=n; ++i) {
        i64 price;
        string s;
        cin >> price >> s;

        sort(All(s));

        for(auto ch : s)
            st.insert(ch);

        if(mp[s]){
            if(mp[s] > price)
                mp[s] = price;
        }
        else mp[s] = price;

    }

    if(st.size() < 3) {
        cout << "-1\n";
        return 0;
    }

    if(!mp["A"]) mp["A"] = Inf;
    if(!mp["B"]) mp["B"] = Inf;
    if(!mp["C"]) mp["C"] = Inf;
    if(!mp["AB"]) mp["AB"] = Inf;
    if(!mp["AC"]) mp["AC"] = Inf;
    if(!mp["BC"]) mp["BC"] = Inf;
    if(!mp["ABC"]) mp["ABC"] = Inf;

    ans = min(ans, mp["A"]+mp["B"]+mp["C"]);
    ans = min(ans, mp["A"]+mp["BC"]);
    ans = min(ans, mp["B"]+mp["AC"]);
    ans = min(ans, mp["C"]+mp["AB"]);
    ans = min(ans, mp["AB"]+mp["AC"]);
    ans = min(ans, mp["AB"]+mp["BC"]);
    ans = min(ans, mp["AC"]+mp["AB"]);
    ans = min(ans, mp["AC"]+mp["BC"]);
    ans = min(ans, mp["BC"]+mp["AB"]);
    ans = min(ans, mp["BC"]+mp["AC"]);
    ans = min(ans, mp["ABC"]);

    cout << ans << "\n";

    return 0;
}
