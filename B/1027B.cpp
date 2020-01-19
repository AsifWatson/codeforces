#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(false); cin.tie(false); cout.tie(false);
using namespace std;

int main()
{
    IOS
    long long n,q;
    cin>>n>>q;
    for(int i=0; i<q; i++)
    {
        long long x,y,pre,restX,restY,gone1,gone2,doneOnLine,cross,cross1;
        long long sum;
        cin>>x>>y;
        sum=x+y;
        if(n%2==0)
        {
            restX=(x-1);
            doneOnLine=n/2;
            gone1=restX*doneOnLine;
            if(y%2==0)
            {
                gone2=y/2;
            }
            if(y%2==1)
            {
                gone2=(y/2)+1;
            }
            if(sum%2==0)
            {
                pre=0;
            }
            if(sum%2==1)
            {
                pre=(n*n)/2;
            }
        }
        if(n%2==1)
        {
            restX=x-1;
            if(sum%2==0)
            {
                pre=0;
                if(restX%2==0)
                {
                    cross=restX/2;
                    gone1=cross*n;
                }
                if(restX%2==1)
                {
                    cross=restX/2;
                    gone1=cross*n;
                    cross1=(n/2)+1;
                    gone1=gone1+cross1;
                }
            }
            if(sum%2==1)
            {
                pre=((n*n)/2)+1;
                if(restX%2==0)
                {
                    cross=restX/2;
                    gone1=cross*n;
                }
                if(restX%2==1)
                {
                    cross=restX/2;
                    gone1=cross*n;
                    cross1=(n/2);
                    gone1=gone1+cross1;
                }
            }
            if(y%2==0)
            {
                gone2=y/2;
            }
            if(y%2==1)
            {
                gone2=(y/2)+1;
            }
        }
        cout<<pre+gone1+gone2<<endl;
    }
    return 0;
}
