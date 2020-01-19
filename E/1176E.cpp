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
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        vector<int> graph[n+5];
        int level[n+5];
        int visited[n+5];

        for(int i=0;i<n+5;i++)visited[i]=0;

        for(int i=1;i<=m;i++)
        {
            int x,y;
            cin>>x>>y;
            graph[x].push_back(y);
            graph[y].push_back(x);
        }
        /*for(int i=1;i<=n;i++)
        {
            cout<<i<<" => ";
            for(int j=0;j<graph[i].size();j++)cout<<graph[i][j]<<" ";
            cout<<endl;
        }*/

        vector<int> even;
        vector<int> odd;

        queue<int>q;
        q.push(1);
        visited[1]=1;
        level[1]=1;
        odd.push_back(1);

        while(!q.empty())
        {
            int u=q.front();
            for(int i=0;i<graph[u].size();i++)
            {
                if(!visited[graph[u][i]])
                {
                    int v=graph[u][i];

                    level[v]=level[u]+1;
                    if(level[v]%2==1)odd.push_back(v);
                    else even.push_back(v);

                    visited[v]=1;
                    q.push(v);
                }
            }
            q.pop();
        }
        if(even.size()<=odd.size())
        {
            cout<<even.size()<<endl;
            for(int i=0;i<even.size();i++)cout<<even[i]<<" ";
            cout<<endl;
        }
        else
        {
            cout<<odd.size()<<endl;
            for(int i=0;i<odd.size();i++)cout<<odd[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
/* 2

4 6
1 2
1 3
1 4
2 3
2 4
3 4

6 8
2 5
5 4
4 3
4 1
1 3
2 3
2 6
5 6 */

