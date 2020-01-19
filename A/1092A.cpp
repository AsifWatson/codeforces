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
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,k,z=0;
        string s="";
        cin>>n>>k;
        for(long long i=1;i<=n;i++)
        {
            if(z%k==0)
            {
                z=0;
            }
            char ch;
            ch=97+z;
            s+=ch;
            z++;
        }
        //sort(s.rbegin(),s.rend());
        cout<<s<<endl;
    }
    return 0;
}
