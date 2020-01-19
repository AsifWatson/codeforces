#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1.0)
#define memo(a,b) memset((a),(b),sizeof(a))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
using namespace std;

int main()
{
    IOS
    int t;
    cin>>t;
    while(t--)
    {
        double d;
        cin>>d;
        if(d==0 || d==4)
        {
            cout<<"Y "<<d/2<<".000000000 "<<d/2<<".000000000"<<endl;
            continue;
        }
        if(d>=1 && d<=3)
        {
            cout<<"N"<<endl;
            continue;
        }
        double lo=1.0,hi=2.0,mid;
        long long num=0;
        while(num<1000)
        {
            mid=(hi+lo)/2.0;
            if((d-mid)*mid>d)
            {
                hi=mid;
            }
            if((d-mid)*mid<d)
            {
                lo=mid;
            }
            num++;
        }
        cout<<"Y "<<setprecision(11)<<d-mid<<" "<<setprecision(10)<<mid<<endl;
    }
    return 0;
}

