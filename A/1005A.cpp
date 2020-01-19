#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,coun=0,coun2,z=0;
    int a[1002];
    int arr[1002];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            if(coun>0)
            {
                arr[z++]=coun2;
            }
            coun++;
            coun2=1;
        }
        if(a[i]!=1)
        {
            coun2++;
        }
    }
    arr[z++]=coun2;
    cout<<coun<<endl<<arr[0];
    for(int i=1;i<z;i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;
    return 0;
}
