#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,sum=0;
    char str[52];
    cin>>n>>k;
    scanf("%s",str);
    sort(str,str+n);
    stack<int> stk;
    for(int i=n-1;i>=1;i--)
    {
        int a=str[i]-96;
        stk.push(a);
    }
    int b=str[0]-96;
    sum=sum+b;
    k--;
    int mark=b;
    while(1)
    {
        if(stk.size()==0)
        {
            break;
        }
        if(k==0)
        {
            break;
        }
        int c=stk.top();
        if(c-mark>1)
        {
            sum=sum+c;
            mark=c;
            k--;
        }
        stk.pop();
    }
    if(k==0)
        cout<<sum<<endl;
    if(k!=0)
        cout<<-1<<endl;
    return 0;
}
