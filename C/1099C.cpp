#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define memo(a,b) memset((a),(b),sizeof(a))
#define all(v) v.begin(),v.end()
#define allre(v) v.rbegin(),v.rend()
#define sp(x,y) fixed<<setprecision(y)<<x
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define GCD(a,b) __gcd(a,b)
#define LCM(a,b) ((a*b)/__gcd(a,b) )
using namespace std;

const double pi = acos(-1.0);
const double EPS = 1e-6;
const int MOD = (int)1e9+7;

int main()
{
    IOS
    string s,str="";
    cin>>s;
    long long k,numTotal=0,numWhat=0,numStar=0;
    cin>>k;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='?')
        {
            numWhat++;
        }
        else if(s[i]=='*')
        {
            numStar++;
        }
        else
        {
            numTotal++;
        }
    }
    if(numStar==0 && numWhat==0)
    {
        if(numTotal==k)
        {
            cout<<s<<endl;
        }
        else
        {
            cout<<"Impossible"<<endl;
        }
        return 0;
    }
    if(numStar==0 && numWhat!=0)
    {
        if(k<numTotal-numWhat || k>numTotal)
        {
            cout<<"Impossible"<<endl;
            return 0;
        }
        else
        {
            int remov=(numTotal-k);
            for(int i=s.size()-1; i>=0; i--)
            {
                if(s[i]=='?' && remov>0)
                {
                    i--;
                    remov--;
                    continue;
                }
                if(s[i]=='?' && remov==0)
                {
                    continue;
                }
                str+=s[i];
            }
        }
    }
    if(numStar!=0 && numWhat==0)
    {
        if(k<numTotal-numStar)
        {
            cout<<"Impossible"<<endl;
            return 0;
        }
        if(k<=numTotal)
        {
            int remov=(numTotal-k);
            {
                for(int i=s.size()-1; i>=0; i--)
                {
                    if(s[i]=='*' && remov>0)
                    {
                        i--;
                        remov--;
                        continue;
                    }
                    if(s[i]=='*' && remov==0)
                    {
                        continue;
                    }
                    str+=s[i];
                }
            }
        }
        if(k>numTotal)
        {
            int neww=(k-numTotal);
            int mark=0;
            for(int i=s.size()-1;i>=0;i--)
            {
                if(s[i]=='*' && mark==0)
                {
                    mark=1;
                    for(int j=1;j<=neww;j++)
                    {
                        str+=s[i-1];
                    }
                    continue;
                }
                if(s[i]=='*' && mark==1)
                {
                    continue;
                }
                str+=s[i];
            }
        }
    }
    if(numWhat>0 && numStar>0)
    {
        if(k<numTotal-(numWhat+numStar))
        {
            cout<<"Impossible"<<endl;
            return 0;
        }
        if(k<=numTotal)
        {
            int remov=(numTotal-k);
            {
                for(int i=s.size()-1; i>=0; i--)
                {
                    if((s[i]=='*' || s[i]=='?') && remov>0)
                    {
                        i--;
                        remov--;
                        continue;
                    }
                    if((s[i]=='*' || s[i]=='?') && remov==0)
                    {
                        continue;
                    }
                    str+=s[i];
                }
            }
        }
        if(k>numTotal)
        {
            int neww=(k-numTotal);
            int mark=0;
            for(int i=s.size()-1;i>=0;i--)
            {
                if(s[i]=='*' && mark==0)
                {
                    mark=1;
                    for(int j=1;j<=neww;j++)
                    {
                        str+=s[i-1];
                    }
                    continue;
                }
                if((s[i]=='*' && mark==1) || s[i]=='?' )
                {
                    continue;
                }
                str+=s[i];
            }
        }
    }
    reverse(str.begin(),str.end());
    cout<<str<<endl;
    return 0;
}
