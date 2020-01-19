#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    IOS
    long long a,b,x,y;
    cin>>a>>b>>x>>y;
    long long gc=__gcd(x,y);
    x/=gc;
    y/=gc;
    long long A=a/x;
    long long B=b/y;
    cout<<min(A,B)<<endl;
    return 0;
}
