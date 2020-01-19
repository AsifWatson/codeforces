#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    IOS
    int n;
    cin>>n;
    int a[n+2];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n==1)
    {
        cout<<"0"<<endl;
        return 0;
    }
    sort(a,a+n);
    cout<<a[n-1]-a[0]+1-n<<endl;
    return 0;
}

