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
    int n,flag=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n-1;i++)
    {
        int a=s[i]-'a';
        int b=s[i+1]-'a';
        if(a>b && flag==0)
        {
            flag=1;
            continue;
        }
        cout<<s[i];
    }
    if(flag==1)
    {
        cout<<s[n-1];
    }
    cout<<endl;
    return 0;
}
