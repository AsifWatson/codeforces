#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,sum1=0,b;
    int arr[200010];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }

    for(int i=0;i<n;i++)
    {
        sum1=sum1+arr[i];
        if(2*sum1>=sum){
            b=i;
            break;
        }

    }
    printf("%d\n",b+1);
    return 0;
}
