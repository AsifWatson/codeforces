#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1.0)
#define memo(a,b) memset((a),(b),sizeof(a))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
using namespace std;

long long countDivisors(long long n)
{
    long long cnt = 0;
    for (long long i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)cnt++;

            else cnt = cnt + 2;
        }
    }
    return cnt;
}

int main()
{
    IOS
    long long b;
    cin>>b;
    cout<<countDivisors(b)<<endl;
    return 0;
}
