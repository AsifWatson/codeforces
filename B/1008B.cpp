#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int w,h;
    int prw=0;
    int prh=0;
    cin>>n;
    int flag=0;
    if(n>=1)
    {
        cin>>w>>h;
        if(w>h)
        {
            prh=w;
        }
        else
        {
            prh=h;
        }

    }
    for(int i=1;i<n;i++)
    {
        cin>>w>>h;
        if(flag==0)
        {
            if(h<=prh && w<=prh)
            {
                if(w>h)
                {
                    prh=w;
                }
                else
                {
                    prh=h;
                }
                continue;
            }
            if(h<=prh)
            {
                prh=h;
            }
            else if(w<=prh)
            {
                prh=w;
            }
            else
            {
                flag=1;
            }
        }
    }
    if(flag==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    return 0;
}
