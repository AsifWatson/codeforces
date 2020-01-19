#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double r;
    cin>>n>>r;
    cout<<fixed<<setprecision(7)<<(r*sin(acos(-1)/n*1.0))/(1-sin(acos(-1)/n*1.0))*1.0<<endl;
    return 0;
}
