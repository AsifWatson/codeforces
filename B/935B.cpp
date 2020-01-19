#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x=0,y=0,p=0,q=0,c=0;
    int a[100005];
    int b[100005];
    scanf("%d",&n);
    char str[100005];
    scanf("%s",str);
    for(int i=0;i<n;i++)
    {
        if(str[i]=='U')
        {
            y++;
            a[p++]=x;
            b[q++]=y;
        }
        else if(str[i]=='R')
        {
            x++;
            a[p++]=x;
            b[q++]=y;
        }
    }

    for(int i=0;i<n-2;i++)
    {
        if(a[i+1]==b[i+1])
        {
            if(a[i]==a[i+2] && b[i+2]-b[i]==2)
            {
                c++;
            }
            else if(b[i]==b[i+2] && a[i+2]-a[i]==2)
            {
                c++;
            }
        }
    }
    printf("%d\n",c);
    return 0;
}
