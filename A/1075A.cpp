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
    long long n,x,y;
    cin>>n;
    cin>>x>>y;
    long long sum;
    sum=x+y;
    if(sum<=n+1)
    {
        cout<<"White"<<endl;
    }
    else if(sum>n+1)
    {
        cout<<"Black"<<endl;
    }
    return 0;
}
