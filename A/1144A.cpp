#include<bits/stdc++.h>
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

bool Reverse(long long a,long long b)
{
    return a>b;
}

int main()
{
    IOS
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        set<char> st;
        for(int i=0;i<s.size();i++)st.insert(s[i]);
        sort(s.begin(),s.end());
        int first=s[0]-'a';
        int last=s[s.size()-1]-'a';
        if((st.size()==s.size())  && (last-first==s.size()-1)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
