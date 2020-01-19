#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char str[110];
    scanf("%d",&n);
    scanf("%s",str);
    for(int i=n-1;i>=1;i--)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='y' )
        {
            if(str[i-1]=='a' || str[i-1]=='e' || str[i-1]=='i' || str[i-1]=='o' || str[i-1]=='u' || str[i-1]=='y')
            {
                str[i]='*';
            }
        }
    }
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]!='*')
            printf("%c",str[i]);
    }
    return 0;
}
