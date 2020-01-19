#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[100];
    cin>>n;
    for(int i=0;i<n/2;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,(arr+(n/2)));
    int a=1,b=2,sum1=0,sum2=0;
    for(int i=0;i<n/2;i++)
    {
        sum1=sum1+abs(arr[i]-a);
        a=a+2;
        sum2=sum2+abs(arr[i]-b);
        b=b+2;
    }
    if(sum1>sum2)
        cout<<sum2<<endl;
    else
        cout<<sum1<<endl;
    return 0;
}
