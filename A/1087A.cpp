#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define memo(a,b) memset((a),(b),sizeof(a))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
using namespace std;

const double pi = acos(-1.0);
const double EPS = 1e-6;
const int MOD = (int)1e9+7;

int main()
{
    IOS
    string t,s="";
    cin>>t;
    long long mid=(t.size()-1)/2;
    s+=t[mid];
    for(long long i=1;i<=mid;i++)
    {
        char ch,ch1;
        ch=t[mid+i];
        ch1=t[mid-i];
        s=s+ch;
        s=s+ch1;
    }
    if(t.size()%2==0)
    {
        char ch;
        ch=t[t.size()-1];
        s+=ch;
    }
    cout<<s<<endl;
    return 0;
}
