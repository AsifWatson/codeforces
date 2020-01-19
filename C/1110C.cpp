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
    int q;
    cin>>q;
    long long ara[25]={0,1,1,5,1,21,1,85,73,341,89,1365,1,5461,4681,21845,1,87381,1,349525,299593,1398101,178481,5592405,1082401};
    while(q--)
    {
        long long a,temp,temp2;
        cin>>a;
        temp=a;
        temp2=log2(temp);
        if(a+1==pow(2,(temp2+1)))
        {
            if((temp2+1)%2==1)
            {
                cout<<ara[temp2]<<endl;
            }
            else
            {
                long long asif=1,sum=0;
                for(int i=1;i<=temp2;i++)
                {
                    if(i%2==1){sum+=asif;}
                    asif*=2;
                }
                cout<<sum<<endl;
            }
        }
        else
        {
            temp2++;
            long long asif=1,sum=0;
            for(int i=1;i<=temp2;i++)
            {
                sum+=asif;
                asif*=2;
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}
