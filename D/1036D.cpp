#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    IOS
    int n,m;
    long long sumA=0,sumB=0;
    cin>>n;
    queue<int> q1,q2;
    for(int i=0;i<n;i++)
    {
        long long A;
        cin>>A;
        sumA+=A;
        q1.push(A);
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        long long B;
        cin>>B;
        sumB+=B;
        q2.push(B);
    }
    if(sumA!=sumB)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    int siz=0;
    long long a,b;
    int nu=0;
    while(true)
    {
        if(nu==0)
        {
            a=q1.front();
            b=q2.front();
        }
        if(nu==-1)
        {
            a+=q1.front();
        }
        if(nu==1)
        {
            b+=q2.front();
        }
        if(a==b)
        {
            siz++;
            q1.pop();
            q2.pop();
            nu=0;
        }
        if(a<b)
        {
            nu=-1;
            q1.pop();
        }
        if(a>b)
        {
            nu=1;
            q2.pop();
        }
        if(q1.size()==0 && q2.size()==0)
        {
            break;
        }
    }
    cout<<siz<<endl;
    return 0;
}

