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
    long long q;
    cin>>q;
    while(q--)
    {
        long long l,r,odd,even,Aeven=0,Aodd=0,sum1,sum2,sum;
        cin>>l>>r;
        if(l%2==0)
        {
            if(r%2==0)
            {
                even=((r-l)/2)+1;
                odd=(((r-1)-(l+1))/2)+1;
            }
            else if(r%2==1)
            {
                even=(((r-1)-l)/2)+1;
                odd=((r-(l+1))/2)+1;
            }
            if(even>0)
            {
                Aeven=l;
            }
            if(odd>0)
            {
                Aodd=l+1;
            }
        }
        else if(l%2==1)
        {
            if(r%2==0)
            {
                even=((r-(l+1))/2)+1;
                odd=(((r-1)-l)/2)+1;
            }
            else if(r%2==1)
            {
                even=(((r-1)-(l+1))/2)+1;
                odd=((r-l)/2)+1;
            }
            if(even>0)
            {
                Aeven=l+1;
            }
            if(odd>0)
            {
                Aodd=l;
            }
        }
        //cout<<odd<<" "<<even<<endl;
        //cout<<Aodd<<" "<<Aeven<<endl;
        sum1=even*(Aeven+even-1);
        sum2=odd*(Aodd+odd-1);
        sum=sum1-sum2;
        cout<<sum<<endl;
    }
    return 0;
}
