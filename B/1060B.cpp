#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int countDigit(long long n)
{
    int c=0;
    while(n)
    {
        n=n/10;
        c++;
    }
    return c;
}

int SOD(long long n)
{
    int sum=0;
    while(n)
    {
        sum+=n%10;
        n=n/10;
    }
    return sum;
}

int main()
{
    IOS
    long long n;
    cin>>n;
    if(countDigit(n)==1)
    {
        cout<<n<<endl;
        return 0;
    }
    long long digit=countDigit(n);
    long long p=1;
    for(int i=1;i<digit;i++)
    {
        p=p*10;
    }
    cout<<((digit-1)*9) + SOD(1+(n-p))<<endl;
    return 0;
}
