#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    set<string> st;
    set<string> :: iterator it;
    multiset<string> mst;
    vector<pair<int,string> >v;
    for(int i=0;i<n-1;i++)
    {
        string s1="";
        char c1=s[i];
        char c2=s[i+1];
        s1=s1+c1+c2;
        st.insert(s1);
        mst.insert(s1);
    }
    for(it=st.begin();it!=st.end();++it)
    {
        string str=*it;
        v.push_back(make_pair(mst.count(str),str));
    }
    sort(v.rbegin(),v.rend());
    cout<<v[0].second<<endl;
    return 0;
}
