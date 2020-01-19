#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        if(i==n)
        {
            if(a%2==0)
            {
                cout<<a-1<<endl;
            }
            else
            {
                cout<<a<<endl;
            }
            return 0;
        }
        if(a%2==0)
        {
            cout<<a-1<<" ";
        }
        else
        {
            cout<<a<<" ";
        }
    }
    return 0;
}
