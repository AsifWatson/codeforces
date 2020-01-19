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
    long long n,k;
    cin>>n>>k;
    long long a[n];
    string s;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cin>>s;
    int coun=1,st=0;
    long long sum=0;
    for(int i=1; i<s.size(); i++)
    {
        if(s[i-1]==s[i])
        {
            coun++;
        }
        else
        {
            if(coun==1)
            {
                sum+=a[i-1];
            }
            else if(coun<=k)
            {
                for(int j=st; j<i; j++)
                {
                    sum+=a[j];
                }
            }
            else
            {
                int ara[coun];
                for(int j=st,z=0; j<i; j++,z++)
                {
                    ara[z]=a[j];
                }
                sort(ara,ara+coun);
                for(int j=coun-1; j>=coun-k; j--)
                {
                    sum+=ara[j];
                }
            }
            coun=1;
            st=i;
        }
    }
    if(coun==1)
    {
        sum+=a[n-1];
    }
    else if(coun<=k)
    {
        for(int j=st; j<n; j++)
        {
            sum+=a[j];
        }
    }
    else
    {
        int ara[coun];
        for(int j=st,z=0; j<n; j++,z++)
        {
            ara[z]=a[j];
        }
        sort(ara,ara+coun);
        for(int j=coun-1; j>=coun-k; j--)
        {
            sum+=ara[j];
        }
    }
    cout<<sum<<endl;
    return 0;
}
