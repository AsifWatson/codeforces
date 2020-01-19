#include<bits/stdc++.h>
using namespace std;

int f[102];

void failure(string text)
{
    memset(f,0,102);
    f[0]=0;
    int j = 0;
    int n = text.size();
    for(int i = 1; i < n; i++)
    {
        if(text[i]==text[j])
        {
            f[i]=++j;
        }
        else
        {
            while(j!=0)
            {
                j = f[j-1];
                if(text[i]==text[j])
                {
                    f[i] = ++j;
                    break;
                }
            }
        }
    }
}

bool kmp(string text, string pattern)
{
    int j = 0;
    int n=text.size();
    int m=pattern.size();
    for(int i = 0; i < n; i++)
    {
        if(text[i]==pattern[j])
        {
            if(j==m-1)
            {
                return true;
            }
            j++;
        }
        else
        {
            while(j!=0)
            {
                j = f[j-1];
                if(text[i]==pattern[j])
                {
                    j++;
                    break;
                }
            }
        }
    }
    return false;
}

int main()
{
    vector<pair<int,string> > v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        v.push_back(make_pair(s.size(),s));
    }
    sort(v.begin(),v.end());
    for(int i=0; i<v.size()-1; i++)
    {
        failure(v[i+1].second);
        if(!kmp(v[i+1].second,v[i].second))
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].second<<endl;
    }
    return 0;
}
