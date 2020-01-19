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

long long n,ans=INT_MAX,visited[55][55];
char arr[55][55];
vector<pair<long long,long long> > v[3];

void bfs(long long s1, long long s2,int index)
{
    for(int i=1;i<=n;i++){for(int j=1;j<=n;j++){visited[i][j]=0;}}

    queue<pair<long long,long long> >Q;
    Q.push({s1,s2});
    visited[s1][s2]=1;

    while(!Q.empty())
    {
        pair<long long,long long> u = Q.front();
        v[index].push_back(u);

        if(u.first-1>=1 && arr[u.first-1][u.second]=='0' && !visited[u.first-1][u.second])
        {
            Q.push({u.first-1,u.second});
            visited[u.first-1][u.second]=1;
        }
        if(u.first+1<=n && arr[u.first+1][u.second]=='0' && !visited[u.first+1][u.second])
        {
            Q.push({u.first+1,u.second});
            visited[u.first+1][u.second]=1;
        }
        if(u.second-1>=1 && arr[u.first][u.second-1]=='0' && !visited[u.first][u.second-1])
        {
            Q.push({u.first,u.second-1});
            visited[u.first][u.second-1]=1;
        }
        if(u.second-1<=n && arr[u.first][u.second+1]=='0' && !visited[u.first][u.second+1])
        {
            Q.push({u.first,u.second+1});
            visited[u.first][u.second+1]=1;
        }

        Q.pop();
    }
}

int main()
{
    IOS
    cin>>n;
    long long s1,s2,e1,e2;
    cin>>s1>>s2;
    cin>>e1>>e2;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>arr[i][j];
        }
    }
    bfs(s1,s2,1);
    bfs(e1,e2,2);
    for(int i=0;i<v[1].size();i++)
    {
        for(int j=0;j<v[2].size();j++)
        {
            long long a=(v[1][i].first-v[2][j].first);
            long long b=(v[1][i].second-v[2][j].second);
            ans=min(ans,((a*a)+(b*b)));
        }
    }
    cout<<ans<<endl;
    return 0;
}
