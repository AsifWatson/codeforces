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
        long long a,b,k,left,right,R,L,sum;
        cin>>a>>b>>k;
        left=k/2;
        right=k-left;
        R=right*a;
        L=left*b;
        sum=R-L;
        cout<<sum<<endl;
    }
    return 0;
}
