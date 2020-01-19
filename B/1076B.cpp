#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1.0)
#define memo(a,b) memset((a),(b),sizeof(a))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
using namespace std;

long long primeFactors(long long n)
{
    while (n%2 == 0)
    {
        n = n/2;
    }
    for (long long i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            return i;
            n = n/i;
        }
    }
    if (n > 2){
        return n;
    }
}

int main()
{
    IOS
    long long n,num;
    cin>>n;
    if(n%2==0)
    {
        cout<<(n/2)<<endl;
    }
    if(n%2==1)
    {
        num=primeFactors(n);
        n=n-num;
        cout<<(n/2)+1<<endl;
    }
    //main();
    return 0;
}

