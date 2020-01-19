/***********************************************************|
|          /\           /-------|   -----    |-----------|  |
|         /  \         /              |      |              |
|        /    \       |               |      |              |
|       /      \      |----|          |      |-------|      |
|      / ------ \          |-----|    |      |              |
|     /          \               |    |      |              |
|    /            \              /    |      |              |
|  ---            --- |---------/   -----  -----            |
|                                                           |
|   Codeforces = Asif_Watson  ||  Codechef = asif_watson    |
|   Mail = ashfaqislam33@gmail.com                          |
|   CSTE,Noakhali Science and Technology University(11)     |
|                                                           |
************************************************************/


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

bool compare(pair<long long,long long> a,pair<long long,long long> b)
{
    if(a.first==b.first)return a.second>b.second;
    return a.first<b.first;
}

string s1,s2,s3;

bool isMentsu()
{
    bool kontsu=false,shuntsu=false;
    if(s1==s2 && s2==s3)kontsu=true;
    if(s1[1]==s2[1] && s2[1]==s3[1])
    {
        vector<int>v;
        v.push_back(s1[0]-'0');
        v.push_back(s2[0]-'0');
        v.push_back(s3[0]-'0');
        sort(all(v));
        for(int i=0;i<v.size();i++)
        {
            if(v[1]-v[0]==1 && v[2]-v[1]==1)shuntsu=true;
        }
    }
    return kontsu|shuntsu;
}

int main()
{
    IOS
    cin>>s1>>s2>>s3;
    if(isMentsu())cout<<"0"<<endl;
    else
    {
        set<string>st;
        st.insert(s1);
        st.insert(s2);
        st.insert(s3);
        if(st.size()==2)cout<<"1"<<endl;
        else
        {
            map<char,int>mp;
            if(s1[1]=='m')mp['m']++;
            if(s1[1]=='p')mp['p']++;
            if(s1[1]=='s')mp['s']++;

            if(s2[1]=='m')mp['m']++;
            if(s2[1]=='p')mp['p']++;
            if(s2[1]=='s')mp['s']++;

            if(s3[1]=='m')mp['m']++;
            if(s3[1]=='p')mp['p']++;
            if(s3[1]=='s')mp['s']++;
            ///cout<<mp['m']<<" "<<mp['p']<<" "<<mp['s']<<endl;
            if(mp['m']>=2)
            {
                vector<int> v;
                if(s1[1]=='m')v.push_back(s1[0]-'0');
                if(s2[1]=='m')v.push_back(s2[0]-'0');
                if(s3[1]=='m')v.push_back(s3[0]-'0');
                sort(all(v));
                for(int i=1;i<v.size();i++)
                {
                    if(v[i]-v[i-1]==1 || v[i]-v[i-1]==2){cout<<"1"<<endl;return 0;}
                }
            }
            else if(mp['p']>=2)
            {
                vector<int> v;
                if(s1[1]=='p')v.push_back(s1[0]-'0');
                if(s2[1]=='p')v.push_back(s2[0]-'0');
                if(s3[1]=='p')v.push_back(s3[0]-'0');
                sort(all(v));
                for(int i=1;i<v.size();i++)
                {
                    if(v[i]-v[i-1]==1 || v[i]-v[i-1]==2){cout<<"1"<<endl;return 0;}
                }
            }
            else if(mp['s']>=2)
            {
                vector<int> v;
                if(s1[1]=='s')v.push_back(s1[0]-'0');
                if(s2[1]=='s')v.push_back(s2[0]-'0');
                if(s3[1]=='s')v.push_back(s3[0]-'0');
                sort(all(v));
                for(int i=1;i<v.size();i++)
                {
                    if(v[i]-v[i-1]==1 || v[i]-v[i-1]==2){cout<<"1"<<endl;return 0;}
                }
            }
            cout<<"2"<<endl;
        }
    }
    return 0;
}

