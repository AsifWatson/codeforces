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

struct object
{
    set <int> cut;
    multiset <int> len;

    object(int n)
    {
        cut.insert(0);
        cut.insert(n);
        len.insert(n);
    }
    void newCut(int n)
    {
        auto it = cut.upper_bound(n);
        int next = *it;
        it--;
        int prev = *it;
        len.erase(len.find(next-prev));
        len.insert(next-n);
        len.insert(n-prev);
        cut.insert(n);
    }
    int getMax()
    {
        return *len.rbegin();
    }
};

int main()
{
    IOS

    long long width,height,n;
    cin >> width >> height >> n;

    object Height(height), Width(width);

    while(n--)
    {
        char ch;
        long long cut;

        cin >> ch >> cut;

        if(ch == 'H')Height.newCut(cut);
        else Width.newCut(cut);

        cout << 1LL * Height.getMax() * Width.getMax() << endl;
    }

    return 0;
}

