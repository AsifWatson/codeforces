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
    long long n,k,rest;
    cin>>n>>k;
    long long a[k+2];

    rest=n;

    if(n<k)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=0; i<k; i++)
    {
        a[i]=1;
    }
    rest-=k;
    if(rest>0)
    {
        for(int i=0; i<k; i++)
        {
            if(k-i>rest)
            {
                for(int j=i;j<i+rest;j++)
                {
                    a[j]+=1;
                }
                rest=0;
                break;
            }
            long long pwr,num;
            pwr=log2(rest+1);
            num=pow(2,pwr);
            a[i]+=num-1;
            rest-=num-1;
            //cout<<i<<" "<<rest<<endl;
        }
    }
    if(rest>0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    sort(a,a+k);
    cout<<"YES"<<endl;
    for(int i=0;i<k;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
