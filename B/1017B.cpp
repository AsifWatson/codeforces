#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    IOS
    int n;
    long long zero0=0,zero1=0,aZero=0,aOne=0;
    string a,b;
    cin>>n>>a>>b;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='1') aOne++;
        if(a[i]=='0') aZero++;
        if(b[i]=='0' && a[i]=='0') zero0++;
        if(b[i]=='0' && a[i]=='1') zero1++;
    }
    cout<<(zero0*aOne)+(zero1*aZero)-(zero0*zero1)<<endl;
    return 0;
}

