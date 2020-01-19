/****************************************************************|
|           /\            /-------|    -----     |-----------|   |
|          /  \          /               |       |               |
|         /    \        |                |       |               |
|        /      \       |----|           |       |-------|       |
|       / ------ \           |-----|     |       |               |
|      /          \                |     |       |               |
|     /            \               /     |       |               |
|   ---            ---  |---------/    -----   -----             |
|                                                                |
|    Codeforces = Asif_Watson  ||  Codechef = asif_watson        |
|    UVa = Asif_Watson                                           |
|    Mail = ashfaqislam33@gmail.com                              |
|    CSTE, Noakhali Science and Technology University(11)        |
|                                                                |
*****************************************************************/

#include "bits/stdc++.h"
using namespace std;

#define IOS                   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define Iterate(st,it)        for(auto it=st.begin();it!=st.end();it++)
#define Iteratere(st,it)      for(auto it=st.rbegin();it!=st.rend();it++)

#define All(v)                v.begin(),v.end()
#define Allre(v)              v.rbegin(),v.rend()
#define Unique(v)             sort(All(v)),v.erase(unique(All(v)),v.end())
#define Mem(Array,Value,Size) for(int i=0;i<Size;i++)Array[i]=Value
#define Sp(x,y)               fixed<<setprecision(y)<<x

#define Max3(a,b,c)           max(a,max(b,c))
#define Max(v)                *max_element(All(v))
#define Min3(a,b,c)           min(a,min(b,c))
#define Min(v)                *min_element(All(v))

typedef long long i64;

const double pi = acos(-1.0);
const double EPS = 1e-6;
const int MOD = (int)1e9+7;

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

set<int> FirstSet[27], SecondSet[27];
set< pair<int, int> > CompatiblePair;

int main()
{
    IOS

    int n;
    cin >> n;

    string First, Second;
    cin >> First >> Second;

    for(int i = 0; i < First.size(); i ++)
    {
        int position1, position2;

        if(First[i] == '?') position1 = 26;
        else position1 = First[i] - 'a';

        if(Second[i] == '?') position2 = 26;
        else position2 = Second[i] - 'a';

        FirstSet[position1].insert(i + 1);
        SecondSet[position2].insert(i + 1);
    }

    set<int> FirstRemaining, SecondRemaining;

    for(int i = 0; i < 26; i ++)
    {
        int MinSize = min(FirstSet[i].size(), SecondSet[i].size());
        for(int j = 0; j < MinSize; j ++)
        {
            int Bam = *FirstSet[i].begin();
            FirstSet[i].erase(Bam);

            int Dan = *SecondSet[i].begin();
            SecondSet[i].erase(Dan);

            CompatiblePair.insert({Bam, Dan});
        }

        for(int Element : FirstSet[i]) FirstRemaining.insert(Element);
        for(int Element : SecondSet[i]) SecondRemaining.insert(Element);
    }

    while(true)
    {
        if(FirstRemaining.size() == 0 || SecondSet[26].size() == 0) break;

        int Bam = *FirstRemaining.begin();
        FirstRemaining.erase(Bam);

        int Dan = *SecondSet[26].begin();
        SecondSet[26].erase(Dan);

        CompatiblePair.insert({Bam, Dan});
    }

    while(true)
    {
        if(FirstSet[26].size() == 0 || SecondRemaining.size() == 0) break;

        int Bam = *FirstSet[26].begin();
        FirstSet[26].erase(Bam);

        int Dan = *SecondRemaining.begin();
        SecondRemaining.erase(Dan);

        CompatiblePair.insert({Bam, Dan});
    }

    while(true)
    {
        if(FirstSet[26].size() == 0 || SecondSet[26].size() == 0) break;

        int Bam = *FirstSet[26].begin();
        FirstSet[26].erase(Bam);

        int Dan = *SecondSet[26].begin();
        SecondSet[26].erase(Dan);

        CompatiblePair.insert({Bam, Dan});
    }

    cout << CompatiblePair.size() << endl;
    for(auto Pair : CompatiblePair) cout << Pair.first << " " << Pair.second << endl;

    return 0;
}
