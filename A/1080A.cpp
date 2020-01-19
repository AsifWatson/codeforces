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
    long long n,k,red,green,blue,r,g,b;
    cin>>n>>k;
    red=n*2;
    green=n*5;
    blue=n*8;
    r=((red-1)/k)+1;
    g=((green-1)/k)+1;
    b=((blue-1)/k)+1;
    cout<<r+g+b<<endl;
    return 0;
}
