#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[m];
    int c[n+1];
    for(int i=1;i<=n;i++)
    {
        c[i]=0;
    }
    set<int> st;
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
        c[a[i]]++;
        st.insert(a[i]);
        if(st.size()==n)
        {
            cout<<"1";
            for(int j=1;j<=n;j++)
            {
                c[j]--;
                st.erase(j);
                if(c[j]>0)
                {
                    st.insert(j);
                }
            }
            continue;
        }
        cout<<"0";
    }
    cout<<endl;
    return 0;
}
