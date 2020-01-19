#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    double s,min=999999.99;
    int a[5010],b[5010];
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&a[i],&b[i]);

        s=(double)a[i]/(double)b[i];
        if(s<min)
        {
            min=s;
        }
    }

    printf("%.8lf\n",min*m);

    return 0;
}
