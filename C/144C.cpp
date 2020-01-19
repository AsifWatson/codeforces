#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define allre(v) v.rbegin(),v.rend()
#define sp(x,y) fixed<<setprecision(y)<<x
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define GCD(a,b) __gcd(a,b)
#define LCM(a,b) ((a*b)/__gcd(a,b))
using namespace std;

const double pi = acos(-1.0);
const double EPS = 1e-6;
const int MOD = (int)1e9+7;

bool Reverse(long long a,long long b){return a>b;}

map<char,int>mp1,mp2;
set<char>st1;
set<char>:: iterator it;

int main()
{
    IOS
    int coun,idx=0,cou;
    string s1,s2;
    cin>>s1>>s2;
    if(s2.size()>s1.size()){cout<<"0"<<endl;return 0;}
    for(int i=0;i<s2.size();i++)
    {
        if(!mp2[s2[i]])mp2[s2[i]]=1;
        else mp2[s2[i]]++;
    }
    for(int i=0;i<s2.size();i++)
    {
        st1.insert(s1[i]);
        if(!mp1[s1[i]])mp1[s1[i]]=1;
        else mp1[s1[i]]++;
    }
    for(it=st1.begin();it!=st1.end();++it)
    {
        if(*it=='?')continue;
        if(mp1[*it]>mp2[*it]){coun=0;break;}
        else coun=1;
    }
    if(st1.size()==1 && *st1.begin()=='?')coun=1;
    for(int i=s2.size();i<s1.size();i++)
    {
        st1.insert(s1[i]);
        if(!mp1[s1[i]])mp1[s1[i]]=1;
        else mp1[s1[i]]++;
        mp1[s1[idx]]--;
        if(!mp1[s1[idx]])st1.erase(s1[idx]);
        idx++;
        for(it=st1.begin();it!=st1.end();++it)
        {
            if(*it=='?')continue;
            if(mp1[*it]>mp2[*it]){cou=0;break;}
            else cou=1;
        }
        if(st1.size()==1 && *st1.begin()=='?')cou=1;
        coun+=cou;
    }
    cout<<coun<<endl;
    return 0;
}
