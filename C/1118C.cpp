#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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

bool my(long long a,long long b)
{
    return a>b;
}

long long total[1001],arr[21][21];
map<long long,long long> mp;

int main()
{
    IOS
    long long n;
    cin>>n;
    long long a[(n*n)+1];
    vector<long long> v,v4,v2;
    for(int i=1; i<=n*n; i++)
    {
        cin>>a[i];
        total[a[i]]++;
        if(!mp[a[i]])
        {
            mp[a[i]]=1;
            v.push_back(a[i]);
        }
    }
    sort(v.begin(),v.end());
    if(n%2==0)
    {
        for(int i=0; i<v.size(); i++) { if(total[v[i]]%4!=0) { cout<<"NO"<<endl; return 0; } }
        long long now=0;
        for(int i=1,j=n; i<=n/2,j>(n/2); i++,j--)
        {
            for(int p=1,q=n; p<=(n/2),q>(n/2); p++,q--)
            {
                arr[i][p]=v[now];
                arr[i][q]=v[now];
                arr[j][p]=v[now];
                arr[j][q]=v[now];
                total[v[now]]-=4;
                if(total[v[now]]==0) now++;
            }
        }
        cout<<"YES"<<endl;
        for(int i=1;i<=n;i++){ for(int j=1;j<=n;j++) { cout<<arr[i][j]<<" "; } cout<<endl; }
    }
    if(n%2==1)
    {
        long long odd=0,four=0,FOUR=(((n-1)/2)*((n-1)/2)),last;
        for(int i=0;i<v.size();i++)
        {
            if(total[v[i]]%2==1) {odd++; last=v[i];}
            if(total[v[i]]>=4) four+=(total[v[i]]/4);
        }
        if(odd!=1 || four<FOUR){ cout<<"NO"<<endl; return 0; }
        for(int i=0;i<v.size();i++){if(total[v[i]]>=4){v4.push_back(v[i]);}}
        long long now=0;
        for(int i=1,j=n; i<=n/2,j>(n/2)+1; i++,j--)
        {
            for(int p=1,q=n; p<=(n/2),q>(n/2)+1; p++,q--)
            {
                arr[i][p]=v4[now];
                arr[i][q]=v4[now];
                arr[j][p]=v4[now];
                arr[j][q]=v4[now];
                total[v4[now]]-=4;
                if(total[v4[now]]<4) now++;
            }
        }
        for(int i=0;i<v.size();i++)
        {
            if(total[v[i]]>=2) v2.push_back(v[i]);
        }
        now=0;
        for(int i=1,j=n;i<=(n/2),j>(n/2)+1;i++,j--)
        {
            arr[((n+1)/2)][i]=v2[now];
            arr[((n+1)/2)][j]=v2[now];
            total[v2[now]]-=2;
            if(total[v2[now]]<2) now++;
        }
        for(int i=1,j=n;i<=(n/2),j>(n/2)+1;i++,j--)
        {
            arr[i][((n+1)/2)]=v2[now];
            arr[j][((n+1)/2)]=v2[now];
            total[v2[now]]-=2;
            if(total[v2[now]]<2) now++;
        }
        arr[((n+1)/2)][((n+1)/2)]=last;
        cout<<"YES"<<endl;
        for(int i=1;i<=n;i++){ for(int j=1;j<=n;j++) { cout<<arr[i][j]<<" "; } cout<<endl; }
    }
    return 0;
}
