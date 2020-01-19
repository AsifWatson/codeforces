#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum1=0,sum2=0;
    int x[52],y[52];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
        sum1=sum1+x[i];

    }
    for(int i=0;i<n;i++)
    {
        cin>>y[i];
        sum2=sum2+y[i];
    }
    if(sum1>=sum2)
        cout<<"Yes"<<endl;
    if(sum1<sum2)
        cout<<"No"<<endl;
    return 0;
}
