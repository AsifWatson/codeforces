#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    set<char> mySet;
    cin>>s;
    string s2=s;
    int len=s.length();
    for(int i=0;i<len;i++)
    {
        mySet.insert(s[i]);
    }
    if(mySet.size()==1)
    {
        cout<<0<<endl;
        return 0;
    }

    reverse(s.begin(),s.end());
    if(s==s2)
    {
        cout<<len-1<<endl;
        return 0;
    }
    if(s!=s2)
    {
        cout<<len<<endl;
    }
    return 0;
}
