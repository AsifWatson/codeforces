#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1.0)
#define memo(a,b) memset((a),(b),sizeof(a))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
using namespace std;

int ones(int a)
{
    int c=0;
    while(a)
    {
        if(a%2==1)
        {
            c++;
        }
        a/=2;
    }
    return c;
}
int main()
{
    IOS
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        int one=ones(a);
        int num=1;
        for(int i=1;i<=one;i++)
        {
            num=num*2;
        }
        cout<<num<<endl;
    }
    return 0;
}
