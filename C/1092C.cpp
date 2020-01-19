#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define memo(a,b) memset((a),(b),sizeof(a))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
using namespace std;

const double pi = acos(-1.0);
const double EPS = 1e-6;
const int MOD = (int)1e9+7;

int main()
{
    IOS
    long long n,flag1=1,flag2=1;
    cin>>n;
    vector<pair<long long,string> > v;
    vector<pair<long long,string> > v2;
    for(long long i=0;i<((2*n)-2);i++)
    {
        string s;
        cin>>s;
        v.push_back(make_pair(s.size(),s));
        v2.push_back(make_pair(s.size(),s));
    }
    if(n==2)
    {
        cout<<"PS"<<endl;
        return 0;
    }
    sort(v.begin(),v.end());
    string s1,s2,s3,s4,s5;
    s1=v[v.size()-2].second;
    s2=v[v.size()-1].second;
    for(long long i=0;i<s2.size()-1;i++)
    {
        if(s2[i]!=s1[i+1])
        {
            flag1=0;
        }
    }
    for(long long i=0;i<s1.size()-1;i++)
    {
        if(s1[i]!=s2[i+1])
        {
            flag2=0;
        }
    }
    if(flag1)
    {
        s3=s1;
        char ch=s2[s2.size()-1];
        s3+=ch;
    }
    if(flag2)
    {
        s4=s2;
        char ch=s1[s2.size()-1];
        s4+=ch;
    }
    if(s3==s4)
    {
        s5=s3;
    }
    else
    {
        if(flag1==1 && flag2==0)
        {
            s5=s3;
        }
        if(flag1==0 && flag2==1)
        {
            s5=s4;
        }
        if(flag1==1 && flag2==1)
        {
            long long fl=1;
            s5=s3;
            //cout<<s5<<endl;
            for(long long i=0;i<v.size();i++)
            {
                long long fla1=1,fla2=1;
                string str;
                str=v[i].second;
                //cout<<str<<" Fuck"<<endl;
                for(long long q=0;q<str.size();q++)
                {

                    if(str[q]!=s5[q])
                    {
                        fla1=0;
                        break;
                    }
                }
                for(long long q=0;q<str.size();q++)
                {
                    if(str[q]!=s5[s5.size()-str.size()+q])
                    {
                        fla2=0;
                        break;
                    }
                }
                if(fla1==0 && fla2==0)
                {
                    fl=0;
                    break;
                }
            }
            if(fl==0)
            {
                s5=s4;
            }
        }
    }
    set<string> st;
    for(long long i=0;i<v2.size();i++)
    {
        long long fla1=1;
        string str;
        str=v2[i].second;
        for(long long q=0;q<str.size();q++)
        {
            if(str[q]!=s5[q])
            {
                fla1=0;
                break;
            }
        }
        if(fla1==1)
        {
            if(st.count(str)>0)
            {
                cout<<"S";
            }
            else
            {
                cout<<"P";
            }
        }
        if(fla1==0)
        {
            cout<<"S";
        }
        st.insert(str);
    }
    cout<<endl;
    return 0;
}
