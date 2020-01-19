#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    int c[1010],a[1010];
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    int k=0;
    int pin=a[k];
    int coun=0;
    for(int i=0;i<n;i++)
    {
        if(c[i]<=pin)
        {
            coun++;
            k++;
            if(k==m)
            {
                break;
            }
            pin=a[k];
        }
    }
    cout<<coun<<endl;
    return 0;
}
