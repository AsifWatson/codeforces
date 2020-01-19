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
    int n;
    int a1,a2,b1,b2,c1,c2;
    cin>>n;
    cin>>a1>>a2;
    cin>>b1>>b2;
    cin>>c1>>c2;
    if((b1<a1 && c1<a1) && (b2<a2 && c2<a2))
    {
        cout<<"YES"<<endl;
    }
    else if((b1>a1 && c1>a1) && (b2>a2 && c2>a2))
    {
        cout<<"YES"<<endl;
    }
    else if((b1<a1 && c1<a1) && (b2>a2 && c2>a2))
    {
        cout<<"YES"<<endl;
    }
    else if(((b1>a1 && c1>a1) && (b2<a2 && c2<a2)))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
