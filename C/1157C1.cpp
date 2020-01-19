#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define allre(v) v.rbegin(),v.rend()
#define sp(x,y) fixed<<setprecision(y)<<x
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define GCD(a,b) __gcd(a,b)
#define LCM(a,b) ((a*b)/__gcd(a,b) )
using namespace std;

const double pi = acos(-1.0);
const double EPS = 1e-6;
const int MOD = (int)1e9+7;

bool Reverse(long long a,long long b){return a>b;}

int main()
{
    IOS
    int n,mn=0;
    cin>>n;
    list<int> lst;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        lst.push_back(a);
    }
    vector<char>v;
    for(int i=1;i<=n;i++)
    {
        int left=lst.front();
        int right=lst.back();
        if(left==right && right>mn)
        {
            v.push_back('R');
            break;
        }
        if(left<=mn && right<=mn)break;
        if(left<right)
        {
            if(left<=mn)
            {
                if(right<=mn)break;
                v.push_back('R');
                lst.pop_back();
                mn=right;
                continue;
            }
            v.push_back('L');
            lst.pop_front();
            mn=left;
        }
        else if(right<left)
        {
            if(right<=mn)
            {
                if(left<=mn)break;
                v.push_back('L');
                lst.pop_front();
                mn=left;
                continue;
            }
            v.push_back('R');
            lst.pop_back();
            mn=right;
        }
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)cout<<v[i];
    return 0;
}
