#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<long long> v;
    for(int i=0;i<n;i++)
    {
        long long x,y;
        cin>>x>>y;
        long long sum=x+y;
        v.push_back(sum);
    }
    sort(v.rbegin(),v.rend());
    cout<<v[0]<<endl;
    return 0;
}
