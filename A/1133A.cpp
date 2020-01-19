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
    int h1,m1,h2,m2,totalMinute,minute,hour,restMinute,lastMinute;
    char c1,c2;
    cin>>h1>>c1>>m1;
    cin>>h2>>c2>>m2;
    if(h1==h2)
    {
        totalMinute=m2+m1;
        if(h1<10) cout<<"0"<<h1<<":";
        else cout<<h1<<":";
        minute=totalMinute/2;
        if(minute<10) cout<<"0"<<minute<<endl;
        else cout<<minute<<endl;
    }
    else
    {
        totalMinute=60-m1;
        totalMinute+=(h2-(h1+1))*60;
        totalMinute+=m2;

        minute=totalMinute/2;

        hour=minute/60;
        restMinute=minute%60;

        h1+=hour;
        if(m1+restMinute>59)h1++;
        lastMinute=(m1+restMinute)%60;
        if(h1<10) cout<<"0"<<h1<<":";
        else cout<<h1<<":";

        if(lastMinute<10) cout<<"0"<<lastMinute<<endl;
        else cout<<lastMinute<<endl;
    }
    return 0;
}
