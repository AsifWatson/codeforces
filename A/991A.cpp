#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,n;
    cin>>a>>b>>c>>n;
    int passed;
    passed=(a+b)-c;
    if(passed>=n)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    if(a<c || b<c)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    cout<<n-passed<<endl;
    return 0;
}
