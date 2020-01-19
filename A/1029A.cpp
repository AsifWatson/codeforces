#include<bits/stdc++.h>
using namespace std;

int longestPrefixSuffix(string s)
{
    int n = s.length();
    int lps[n];
    lps[0] = 0;
    int len = 0;
    int i = 1;
    while (i<n)
    {
        if (s[i]==s[len])
        {
            len++;
            lps[i]=len;
            i++;
        }
        else
        {
            if (len!=0)
            {
                len=lps[len-1];
            }
            else
            {
                lps[i]=0;
                i++;
            }
        }
    }

    int res=lps[n-1];
    return /*(res>n/2)? n/2:*/res;
}
int main()
{
    int n,k,c;
    cin>>n>>k;
    string s;
    string d="";
    cin>>s;
    set<char> st;
    for(int i=0;i<n;i++)
    {
        st.insert(s[i]);
    }
    if(st.size()==1)
    {
        cout<<s;
        for(int i=1;i<k;i++)
        {
            cout<<s[0];
        }
        cout<<endl;
        return 0;
    }
    else
    {
        c=longestPrefixSuffix(s);
    }
    for(int i=c;i<n;i++)
    {
        char c=s[i];
        d=d+c;
    }
    cout<<s;
    for(int i=1;i<k;i++)
    {
        cout<<d;
    }
    cout<<endl;
    return 0;
}
