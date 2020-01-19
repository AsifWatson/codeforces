#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    IOS
    int n,c=0;
    cin>>n;
    int div=n/11;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='8')
        {
            c++;
        }
    }
    cout<<min(div,c)<<endl;
    return 0;
}
