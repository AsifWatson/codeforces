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
    cin>>n;
    vector<int> v;
    int ans=0;
    int a[n+1],b[n];
    a[0]=0;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        b[i]=a[i+1]-a[i];
    }
    for(int i=1; i<n; i++)
    {
        for( int j=i; j<n; j++)
        {
            if(b[j]== b[j%i])
            {
                if(j==n-1)
                {
                    v.push_back(i);
                    ans++;
                    break;
                }
            }
            else break;
        }
    }
    cout<<ans+1<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<n<<endl;
    return 0;
}
