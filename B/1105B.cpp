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
    int n,k,coun=1,mx=0;
    cin>>n>>k;
    string s;
    cin>>s;
    int arr[27];
    for(int i=0;i<27;i++)
    {
        arr[i]=0;
    }
    for(int i=1;i<s.size();i++)
    {
        if(s[i]==s[i-1])
        {
            coun++;
        }
        else
        {
            if(coun>=k)
            {
                int a;
                a=s[i-1]-'a'+1;
                arr[a]+=coun/k;
                mx=max(mx,arr[a]);
            }
            coun=1;
        }
    }
    if(coun>=k)
    {
        int a;
        a=s[s.size()-1]-'a'+1;
        arr[a]+=coun/k;
        mx=max(mx,arr[a]);
    }
    cout<<mx<<endl;
    return 0;
}

