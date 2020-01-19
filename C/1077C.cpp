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

    vector<long long> v;
    multiset<long long> st;
    long long n,temp,coun=0;
    long long sum=0;
    cin>>n;
    long long a[n];
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        st.insert(a[i]);
    }
    for(long long i=0;i<n;i++)
    {
        temp=sum-a[i];
        if(temp%2==0)
        {
            temp=temp/2;
            if(a[i]==temp)
            {
                if(st.count(temp)>1)
                {
                    coun++;
                    v.push_back(i+1);
                }
            }
            else if(a[i]!=temp)
            {
                if(st.count(temp)>0)
                {
                    coun++;
                    v.push_back(i+1);
                }
            }
        }
    }
    cout<<coun<<endl;
    for(long long i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
