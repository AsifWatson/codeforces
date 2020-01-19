#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.size();
    int flag=1;
    if(l==1)
    {
        if(s[0]=='a' || s[0]=='e' || s[0]=='o' || s[0]=='u' || s[0]=='i' || s[0]=='n')
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        return 0;
    }
    for(int i=0;i<l-1;i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='u' || s[i]=='i' || s[i]=='n')
        {
            ///flag=1;
           continue;
        }
        else
        {
            if(s[i+1]=='a' || s[i+1]=='e' || s[i+1]=='o' || s[i+1]=='u' || s[i+1]=='i' )
            {
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
        }

    }
    if(s[l-1]=='a' || s[l-1]=='e' || s[l-1]=='o' || s[l-1]=='u' || s[l-1]=='i' || s[l-1]=='n')
    {
        flag==1;
    }
    else
    {
        flag=0;
    }
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
