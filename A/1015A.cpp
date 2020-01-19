#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    set<int> st;
    set<int>::iterator it;
    cin>>n>>m;
    for(int j=1;j<=m;j++)
    {
        st.insert(j);
    }
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        for(int z=a;z<=b;z++)
        {
            st.erase(z);
        }
    }
    cout<<st.size()<<endl;
    if(st.size()>0)
    {
        cout<<*st.begin();
        st.erase(*st.begin());
    }
    if(st.size()>0)
    {
        for (it=st.begin(); it!=st.end(); ++it)
        cout <<" "<< *it;
    }
    return 0;
}
