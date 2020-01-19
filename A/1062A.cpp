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
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    if(n==1)
    {
        cout<<"0"<<endl;
        return 0;
    }
    vector<int> v;
    int coun=0;
    for(int i=0; i<n-1; i++)
    {
        if(a[i+1]-a[i]==1)
        {
            coun++;
        }
        else
        {
            if(coun>0)
            {
                v.push_back(coun+1);
            }
            coun=0;
        }
    }
    if(coun>0)
    {
        v.push_back(coun+1);
    }
    //cout<<coun<<endl;
    if(v.size()>0)
    {
        if(a[0]==1 && a[1]==2)
        {
            v[0]++;
        }
        if(a[n-2]==999 && a[n-1]==1000)
        {
            v[v.size()-1]++;
        }
        for(int i=0; i<v.size(); i++)
        {
            v[i]=v[i]-2;
        }
        sort(v.rbegin(),v.rend());
        cout<<v[0]<<endl;
        return 0;
    }
    cout<<"0"<<endl;
    return 0;
}
