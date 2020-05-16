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

    int t;
    cin >> t;

    while(t--) {
            int n;
            cin >> n;

            multiset < pair < int, int > > length_dtls[n+5];
            set < int > length;

            if(n > 1) {
                    length.insert(n);
                    length_dtls[n].insert({1,n});
            }

            int num = 0, ans[n+5], pos;

            Mem(ans, 0, n+5);

            while(true) {
                    if(length.size() == 0) break;

                    int large = *length.rbegin();

                    pair < int, int > pr = *length_dtls[large].begin();
                    length_dtls[large].erase(pr);

                    if(length_dtls[large].size() == 0) {
                            length.erase(large);
                    }

                    int left = pr.first, right = pr.second;

                    if(large&1)  pos = left + ((right-left)/2);
                    else pos = right - (large/2);

                    ans[pos] = ++num;

                    int l1 = left, r1 = pos - 1;
                    int l2 = pos + 1, r2 = right;

                    if(r1-l1+1 > 1) {
                            length.insert(r1-l1+1);
                            length_dtls[r1-l1+1].insert({l1,r1});
                    }

                    if(r2-l2+1 > 1) {
                            length.insert(r2-l2+1);
                            length_dtls[r2-l2+1].insert({l2,r2});
                    }
            }

            for(int i=1; i<=n; ++i) {
                    if(!ans[i]) ans[i] = ++num;

                    cout << ans[i] << " ";
            }
            cout << endl;
    }

    return 0;
}
