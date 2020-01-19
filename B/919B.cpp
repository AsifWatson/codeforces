#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,i=0,m=19,b,sum,remainder;
    int a[10010];
    scanf("%d",&k);
    for(;;)
    {
        sum=0;
        b=m;
        while (b!=0)
        {
            remainder=b%10;
            sum=sum+remainder;
            b=b/10;
        }
        if(sum!=10)
        {
            m=m+9;
            continue;
        }
        if(sum==10)
        {
            a[i]=m;
        }
        m=a[i]+9;
        i++;
        if(i==k)
        {
            break;
        }
    }
    printf("%d\n",a[k-1]);
    return 0;
}
