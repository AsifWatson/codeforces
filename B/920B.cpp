#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> v;
        int n,z=0,now,l,r;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>l>>r;
            if(i==1)
            {
                v.push_back(l);
                now=l;
                continue;
            }
            if(l<now)
            {
                if(r>now)
                {
                    now++;
                    v.push_back(now);
                    continue;
                }
                v.push_back(0);
                continue;
            }
            if(l==now)
            {
                if(r==l)
                {
                    v.push_back(0);
                    continue;
                }
                if(r>l)
                {
                    l++;
                    v.push_back(l);
                    now=l;
                    continue;
                }
            }
            if(l>now)
            {
                v.push_back(l);
                now=l;
                continue;
            }
        }
        for(int i=0;i<v.size();i++)
        {
            if(i==0)
                cout<<v[i];
            else
                cout<<" "<<v[i];
        }
        cout<<endl;
    }

    return 0;
}
