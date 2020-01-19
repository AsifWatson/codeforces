#include<bits/stdc++.h>
using namespace std;
#define IOS; ios::sync_with_stdio(false); cin.tie(false); cout.tie(false);

int main()
{
    int n;
    long long sum=0;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int i=0;
    while(i<n)
    {
        if(((a[i]=='0' && a[i+1]=='1') && (b[i]=='1' && b[i+1]=='0')) || ((a[i]=='1' && a[i+1]=='0') && (b[i]=='0' && b[i+1]=='1')))
        {
            sum=sum+1;
            i=i+2;
            continue;
        }
        if(a[i]!=b[i])
        {
            sum=sum+1;
        }
        i++;
    }
    cout<<sum<<endl;
    return 0;
}
