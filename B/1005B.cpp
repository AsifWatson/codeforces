#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    int len1=s.length();
    int len2=t.length();
    int i=len1-1;
    int j=len2-1;
    int a=0;
    for(;;)
    {
        if(s[i]==t[j])
        {
            i--;
            j--;
            a++;
            if(i==-1 && j==-1)
            {
                break;
            }
            continue;
        }
        break;
    }
    a=2*a;
    cout<<len1+len2-a<<endl;
    return 0;
}
