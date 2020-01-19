#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,x1,x2,y1,y2,coun=0,coun1=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            char c;
            cin>>c;
            if(c=='B')
            {
                coun++;
                if(coun==1)
                {
                    x1=j;
                    y1=i;
                }
            }
        }
    }
    coun=sqrt(coun);
    coun=coun/2;
    cout<<coun+y1<<" "<<coun+x1<<endl;
    return 0;
}
