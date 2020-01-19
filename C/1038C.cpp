#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    IOS
    int n;
    long long sumA=0,sumB=0;
    cin>>n;
    int a[n+2];
    int b[n+2];
    queue<int> qA,qB;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    for(int i=n-1;i>=0;i--)
    {
        qA.push(a[i]);
        qB.push(b[i]);
    }
    int x=1;
    while(true)
    {
        int a,b;
        a=qA.front();
        if(qA.empty())
        {
            a=0;
        }
        b=qB.front();
        if(qB.empty())
        {
            b=0;
        }
        if(x%2==1)
        {
            if(a<b)
            {
                qB.pop();
            }
            if(a>=b)
            {
                sumA=sumA+a;
                qA.pop();
            }
        }
        if(x%2==0)
        {
            if(a>b)
            {
                qA.pop();
            }
            if(a<=b)
            {
                sumB=sumB+b;
                qB.pop();
            }
        }
        x++;
        if(x==(2*n)+1)
        {
            break;
        }
    }
    cout<<sumA-sumB<<endl;
    return 0;
}

