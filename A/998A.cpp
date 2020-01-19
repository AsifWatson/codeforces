#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0;
    int a[11];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    if(n==1)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    if(n==2)
    {
        if(a[0]==a[1])
        {
            cout<<"-1"<<endl;
            return 0;
        }
        cout<<"1"<<endl;
        cout<<"1"<<endl;
        return 0;
    }
    if(sum%2==1)
    {
        cout<<"1"<<endl;
        cout<<"1";
        /*for(int z=1;z<n-1;z++)
        {
            cout<<" "<<z+1;
        }*/
        cout<<endl;
        return 0;
    }
    if(sum%2==0)
    {
        if(a[0]==sum/2)
        {
            cout<<"2"<<endl;
            cout<<"1"<<" 2"<<endl;
            return 0;
        }

        cout<<"1"<<endl<<"1"<<endl;
    }
    return 0;
}
