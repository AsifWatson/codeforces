#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    IOS
    long long n,k;
    cin>>n>>k;
    long long div=k/n;
    long long mod=k%n;
    if(mod>0)
        div++;
    cout<<div<<endl;
    return 0;
}

