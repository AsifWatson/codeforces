#include<bits/stdc++.h>
using namespace std;

bool same(int a,int b,int c)
{
    if(a+b<=c)
    {
        return false;
    }
    if(a+c<=b)
    {
        return false;
    }
    if(b+c<=a)
    {
        return false;
    }
    return true;
}

int main()
{
    int n,c=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            int sum=i^j;
            if(sum>=j && sum<=n)
            {
                if(same(i,j,sum))
                {
                    //cout<<i<<" "<<j<<" "<<sum<<endl;
                    c++;
                }
            }
        }
    }
    cout<<c<<endl;
    return 0;
}
