#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,j=0,c,sum,now;
    char str[200010];
    vector<int> v;

    scanf("%d %d %d",&n,&a,&b);
    sum=a+b;
    scanf("%s",str);

    if(a<b)
    {
        int temp;
        temp=a;
        a=b;
        b=temp;
    }

    for(int i=0;i<n;i++)
    {
        if(str[i]=='.')
        {
            c=0;
            while(str[i]=='.')
            {
                c++;
                i++;
            }
            v.push_back(c);
        }
    }
    for(int i=0;i<v.size();i++)
    {
        now=v[i];
        if(now%2==0)
        {
            a=a-(now/2);
            b=b-(now/2);
            if(a<0)
            {
                a=0;
            }
            if(b<0)
            {
                b=0;
            }
        }
        if(now%2==1)
        {
            a=a-((now/2)+1);
            b=b-(now/2);
            if(a<0)
            {
                a=0;
            }
            if(b<0)
            {
                b=0;
            }
        }
        if(a==0 && b==0)
            break;

        if(a<b)
        {
            int temp;
            temp=a;
            a=b;
            b=temp;
        }
    }
    if(a+b==0)
    {
        printf("%d\n",sum);
    }
    if(a+b>0)
    {
        printf("%d\n",(sum)-(a+b));
    }
    return 0;
}
