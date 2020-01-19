#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

vector<long long> adj[100005];
bool visited[100005];

void bfs()
{
    for(long long i=0; i<100005; i++)
    {
        visited[i] = false;
    }

    priority_queue<long long, vector<long long>, greater<long long> >Q;
    Q.push(1);
    visited[1] = true;

    while(!Q.empty())
    {
        long long u = Q.top();
        cout << u <<" ";
        Q.pop();
        for(long long i=0; i<adj[u].size(); i++)
        {
            if(visited[adj[u][i]]==0)
            {
                visited[adj[u][i]]=true;
                Q.push(adj[u][i]);
            }
        }
    }
}

int main()
{
    IOS
    long long n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        long long a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bfs();
    return 0;
}
