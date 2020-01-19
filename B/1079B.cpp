#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define memo(a,b) memset((a),(b),sizeof(a))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
using namespace std;

const double pi = acos(-1.0);

int main()
{
    IOS
    string s,s2="";
    cin>>s;
    int len,row,col,rest=0;
    len=s.size();
    if(len%20==0)
    {
        row=len/20;
    }
    else
    {
        row=len/20;
        row++;
    }
    if(len%row==0)
    {
        col=len/row;
    }
    else
    {
        col=len/row;
        col++;
        rest=(col*row)-len;
    }
    cout<<row<<" "<<col<<endl;
    if(row==1)
    {
        cout<<s<<endl;
        return 0;
    }
    else
    {
        int z=0;
        for(int i=len-1;i>=0;i--)
        {
            char ch;
            if(rest>0 && z%col==0)
            {
                ch='*';
                s2=s2+ch;
                rest--;
                z++;
            }
            ch=s[i];
            s2=s2+ch;
            z++;
        }
    }
    reverse(s2.begin(),s2.end());
    for(int i=1;i<=s2.size();i++)
    {
        cout<<s2[i-1];
        if(i%col==0)
        {
            cout<<endl;
        }
    }
    //cout<<s2<<endl;
    return 0;
}

