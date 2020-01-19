#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    int arr[1002];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++)
    {
        set<int> st;
        st.insert(i);
        int s=arr[i];
        int siz=1;
        while(1)
        {
            st.insert(s);
            siz++;
            if(st.size()!=siz)
            {
                v.push_back(s);
                break;
            }
            s=arr[s];
        }
    }
    cout<<v[0];
    for(int i=1;i<v.size();i++)
    {
        cout<<" "<<v[i];
    }
    cout<<endl;
    return 0;
}

