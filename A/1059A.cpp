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
    vector<int> v;
    int n,L,a;
    cin>>n>>L>>a;
    int x,y,sum,sum2=0;
    if(n==0)
    {
        cout<<L/a<<endl;
        return 0;
    }
    if(n>0)
    {
        cin>>x>>y;
        v.push_back(x-0);
        sum=x+y;
    }
    for(int i=1;i<n;i++)
    {
        cin>>x>>y;
        v.push_back(x-sum);
        sum=x+y;
    }
    v.push_back(L-sum);
    for(int i=0;i<v.size();i++)
    {
        sum2+=v[i]/a;
    }
    cout<<sum2<<endl;
    return 0;
}
