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

int main()
{
    IOS

    int n;
    cin >> n;

    int Grid[n+1][n+1], Odd = 1, Even = 2, TotalEven = (n * n) / 2;

    Grid[(n + 1) / 2][(n + 1) / 2] = Odd, Odd += 2;

    for(int i = 1; i <= n; i ++)
    {
        if(i == (n + 1) / 2) continue;

        Grid[i][(n + 1) / 2] = Odd, Odd += 2;
        Grid[(n + 1) / 2][i] = Odd, Odd += 2;
    }

    for(int i = 1; i <= n / 2; i ++)
    {
        for(int j = 1; j <= n / 2; j ++)
        {
            if(TotalEven > 0)
            {
                Grid[i][j] = Even, Even += 2;
                Grid[i][n + 1 - j] = Even, Even += 2;
                Grid[n + 1 - i][j] = Even, Even += 2;
                Grid[n + 1 - i][n + 1 - j] = Even, Even += 2;

                TotalEven -= 4;
            }
            else
            {
                Grid[i][j] = Odd, Odd += 2;
                Grid[i][n + 1 - j] = Odd, Odd += 2;
                Grid[n + 1 - i][j] = Odd, Odd += 2;
                Grid[n + 1 - i][n + 1 - j] = Odd, Odd += 2;
            }
        }
    }

    for(int i = 1; i <= n; i ++)
    {
        for(int j = 1; j <= n; j ++)
        {
            cout << Grid[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
