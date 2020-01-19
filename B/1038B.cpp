#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    IOS
    int n;
    cin>>n;
    if(n<3)
    {
        cout<<"No"<<endl;
        return 0;
    }
    if(n%2==0)
    {
        cout<<"Yes"<<endl;
        cout<<"1 "<<n/2<<endl;
        cout<<n-1;
        for(int i=1;i<=n;i++)
        {
            if(i==(n/2))
                continue;
            cout<<" "<<i;
        }
        cout<<endl;
    }
    if(n%2==1)
    {
        cout<<"Yes"<<endl;
        cout<<"1 "<<n<<endl;
        cout<<n-1;
        for(int i=1;i<n;i++)
        {
            cout<<" "<<i;
        }
        cout<<endl;
    }
    return 0;
}

