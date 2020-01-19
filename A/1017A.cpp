#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int n,mSum;
    int a,b,c,d;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c>>d;
        int sum=a+b+c+d;
        v.push_back(sum);
        if(i==0)
        {
            mSum=sum;
        }
    }
    sort(v.rbegin(),v.rend());
    for(int i=0;i<n;i++)
    {
        if(v[i]==mSum)
        {
            cout<<i+1<<endl;
            break;
        }
    }
    return 0;
}

