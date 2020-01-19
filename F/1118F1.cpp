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

int totalColor[3],color[300010],Count[300010][3],ans;
vector<int> graph[300010];

void dfs(int child,int parent)
{
    Count[child][color[child]]++;
    for(int i=0;i<graph[child].size();i++)
    {
        int grandchild=graph[child][i];
        if(parent!=grandchild)
        {
            dfs(grandchild,child);
            for(int i=0;i<3;i++) Count[child][i]+=Count[grandchild][i];
        }
    }
}

void call(long long child,long long parent)
{
    if(parent)
    {
        int rest[3];
        for(int i=0;i<3;i++) rest[i]=totalColor[i]-Count[child][i];
        if((Count[child][1]==0 || Count[child][2]==0) && (rest[1]==0 || rest[2]==0)) ans++;
    }
    for(int i=0;i<graph[child].size();i++)
    {
        int grandchild=graph[child][i];
        if(parent!=grandchild) call(grandchild,child);
    }
}

int main()
{
    IOS
    long long n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>color[i];
        totalColor[color[i]]++;
    }
    for(int i=1;i<n;i++)
    {
        long long u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    dfs(1,0);
    call(1,0);
    cout<<ans<<endl;
    return 0;
}
