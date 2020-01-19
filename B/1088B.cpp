#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define memo(a,b) memset((a),(b),sizeof(a))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
using namespace std;

int main()
{
    IOS
    long long n,k,siz=0,j=0;
    cin>>n>>k;
    long long a[n];
    set<long long> st;
    for(long long i=0;i<n;i++)
    {
        int z;
        cin>>z;
        st.insert(z);
        if(siz<st.size())
        {
            siz++;
            a[j++]=z;
        }
    }
    sort(a,a+j);
    long long w=0;
    for(long i=1;i<=k;i++)
    {
        if(i>j)
        {
            cout<<"0"<<endl;
            continue;
        }
        if(i==1)
            cout<<a[w]<<endl;
        else
            cout<<a[w]-a[w-1]<<endl;
        w++;
    }
    return 0;
}
