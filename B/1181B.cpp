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

string findSum(string str1, string str2)
{
    if(str1.length()>str2.length()) swap(str1, str2);

    string str = "";

    int n1 = str1.length(), n2 = str2.length();

    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());

    int carry = 0;
    for (int i=0; i<n1; i++)
    {
        int sum = ((str1[i]-'0')+(str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
    for (int i=n1; i<n2; i++)
    {
        int sum = ((str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
    if (carry) str.push_back(carry+'0');

    reverse(str.begin(), str.end());

    return str;
}

string findMin(string s3,string s4)
{
    if(s3.size()>s4.size())return s4;
    else if(s3.size()<s4.size())return s3;
    else
    {
        for(int i=0;i<s3.size();i++)
        {
            if(s3[i]<s4[i])return s3;
            else if(s3[i]>s4[i])return s4;
        }
        return s3;
    }
}

int main()
{
    IOS
    int n;
    cin>>n;
    string s;
    cin>>s;
    string str=s;
    s=' '+s;
    string s1="",s2="",s5="",s6="",s7="",s8="";
    if(n%2==0)
    {
        if(s[(n/2)+1]!='0')
        {
            for(int i=1;i<=n/2;i++)s1+=s[i];
            for(int i=(n/2)+1;i<=n;i++)s2+=s[i];
            cout<<findSum(s1,s2)<<endl;
        }
        else
        {
            int flag=0;
            string s3,s4;
            for(int i=(n/2)+1;i<=n;i++)
            {
                if(s[i]!='0')
                {
                    for(int j=i;j<=n;j++)s2+=s[j];
                    for(int j=1;j<i;j++)s1+=s[j];
                    flag=1;
                    break;
                }
            }
            if(!flag){s2=str,s1=str;}
            s3=findSum(s1,s2);
            s1="",s2="";
            for(int i=n/2;i>=1;i--)
            {
                if(s[i]!='0')
                {
                    for(int j=i;j<=n;j++)s2+=s[j];
                    for(int j=1;j<i;j++)s1+=s[j];
                    break;
                }
            }
            s4=findSum(s1,s2);
            cout<<findMin(s3,s4)<<endl;
        }
    }
    else if(n%2==1)
    {
        for(int i=1;i<=(n/2);i++)s1+=s[i];
        for(int i=(n/2)+1;i<=n;i++)s2+=s[i];
        if(s2[0]=='0')
        {
            s7="",s8="";
            for(int i=n/2;i>=1;i--)
            {
                if(s[i]!='0')
                {
                    for(int j=i;j<=n;j++)s8+=s[j];
                    for(int j=1;j<i;j++)s7+=s[j];
                    break;
                }
            }
        }
        else {s7=s1,s8=s2;}
        if(s2[0]=='0')
        {
            s5="",s6="";
            int flag=0;
            for(int i=(n/2)+1;i<=n;i++)
            {
                if(s[i]!='0')
                {
                    for(int j=i;j<=n;j++)s6+=s[j];
                    for(int j=1;j<i;j++)s5+=s[j];
                    flag=1;
                    break;
                }
            }
            if(!flag){s5=str,s6=str;}
        }
        else {s5=s1,s6=s2;}
        string s3,s4;
        s3=findMin(findSum(s7,s8),findSum(s5,s6));
        s1="",s2="";
        for(int i=1;i<=(n/2)+1;i++)s1+=s[i];
        for(int i=(n/2)+2;i<=n;i++)s2+=s[i];
        if(s2[0]=='0')
        {
            s7="",s8="";
            for(int i=(n/2)+1;i>=1;i--)
            {
                if(s[i]!='0')
                {
                    for(int j=i;j<=n;j++)s8+=s[j];
                    for(int j=1;j<i;j++)s7+=s[j];
                    break;
                }
            }
        }
        else {s7=s1,s8=s2;}
        if(s2[0]=='0')
        {
            int flag=0;
            s5="",s6="";
            for(int i=(n/2)+2;i<=n;i++)
            {
                if(s[i]!='0')
                {
                    for(int j=i;j<=n;j++)s6+=s[j];
                    for(int j=1;j<i;j++)s5+=s[j];
                    flag=1;
                    break;
                }
            }
            if(!flag){s5=str,s6=str;}
        }
        else {s5=s1,s6=s2;}
        s4=findMin(findSum(s7,s8),findSum(s5,s6));
        cout<<findMin(s3,s4)<<endl;
    }
    return 0;
}
