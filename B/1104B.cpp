#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define memo(a,b) memset((a),(b),sizeof(a))
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

int main()
{
    IOS
    string s;
    cin>>s;
    stack<char> st;
    int player=1;
    for(int i=0;i<s.size();i++)
    {
        if(st.empty())
        {
            st.push(s[i]);
            continue;
        }
        if(st.top()==s[i])
        {
            st.pop();
            if(player==1)
            {
                player=2;
            }
            else if(player==2)
            {
                player=1;
            }
            continue;
        }
        st.push(s[i]);
    }
    if(player==1)
    {
        cout<<"No"<<endl;
    }
    if(player==2)
    {
        cout<<"Yes"<<endl;
    }
    return 0;
}
