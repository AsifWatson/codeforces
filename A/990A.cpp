#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m;
    long long a,b;
    cin>>n>>m>>a>>b;
    long long x=n%m;
    if(x==0)
    {
        cout<<"0"<<endl;
        return 0;
    }
    long long y=x*b;
    long long z=(m-x)*a;
    if(y<z)
        cout<<y<<endl;
    else
        cout<<z<<endl;
    return 0;
}
