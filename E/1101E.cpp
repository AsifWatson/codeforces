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
    int n,x=0,y=0;
    scanf("%d",&n);
    getchar();
    for(int i=1; i<=n; i++)
    {
        char ch;
        int a,b;
        scanf("%c %d %d",&ch,&a,&b);
        getchar();
        if(a>b)
        {
            int temp;
            temp=a;
            a=b;
            b=temp;
        }
        if(ch=='+')
        {
            x=max(x,a);
            y=max(y,b);
        }
        if(ch=='?')
        {
            if(x<=a && y<=b)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
    return 0;
}
