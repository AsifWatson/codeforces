#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define allre(v) v.rbegin(),v.rend()
#define sp(x,y) fixed<<setprecision(y)<<x
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define GCD(a,b) __gcd(a,b)
#define LCM(a,b) ((a*b)/__gcd(a,b))
using namespace std;

const double pi = acos(-1.0);
const double EPS = 1e-6;
const int MOD = (int)1e9+7;

bool Reverse(long long a,long long b){return a>b;}

int main()
{
    IOS
    int n;
    cin>>n;
    vector<int>value;
    vector<bool>changeable;
    long long non_fractional_sum=0,positive_sum=0,negative_sum=0;
    for(int i=1;i<=n;i++)
    {
        double x;
        cin>>x;
        if(floor(x)==ceil(x))
        {
            value.push_back(floor(x));
            changeable.push_back(false);
            non_fractional_sum+=floor(x);
            continue;
        }
        if(x>0)
        {
            value.push_back(ceil(x));
            positive_sum+=ceil(x);
        }
        if(x<0)
        {
            value.push_back(floor(x));
            negative_sum+=floor(x);
        }
        changeable.push_back(true);
    }

    if(non_fractional_sum>0)positive_sum+=non_fractional_sum;
    if(non_fractional_sum<0)negative_sum+=non_fractional_sum;

    int decrease=0,increase=0;
    if(positive_sum>(-negative_sum))decrease=(positive_sum+negative_sum);
    if(positive_sum<(-negative_sum))increase=-(positive_sum+negative_sum);

    for(int i=0;i<value.size();i++)
    {
        if(increase>0 && changeable[i] && value[i]<0)
        {
            value[i]++;
            increase--;
        }
        if(decrease>0 && changeable[i] && value[i]>0)
        {
            value[i]--;
            decrease--;
        }
        cout<<value[i]<<endl;
    }
    return 0;
}
