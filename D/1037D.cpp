#include<bits/stdc++.h>
#define MAX 300000
using namespace std;


vector<int> adj[MAX];
int visited[MAX]={0};
int level[MAX];
int parent[MAX];

void bfs(int s)
{
    for(int i=0; i<MAX; i++)
        visited[i] = 0;

    queue<int>Q;
    Q.push(s);
    visited[s] = 1;
    level[s] = 0;

    while(!Q.empty())
    {
        int u = Q.front();
        for(int i=0; i<adj[u].size(); i++)
        {
            if(visited[adj[u][i]]==0)
            {
                int v = adj[u][i];
                level[v] = level[u]+1;
                visited[v] = 1;
                parent[v]=u;
                Q.push(v);
            }
        }
        Q.pop();
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int> vc;
    for(int i=1;i<n;i++)
    {
        int first,second;
        cin>>first>>second;
        adj[first].push_back(second);
        adj[second].push_back(first);
    }
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        vc.push_back(x);
    }
    if(vc[0]!=1)
    {
        cout<<"No"<<endl;
        return 0;
    }
    bfs(1);
    for(int i=0;i<n-1;i++)
    {
        if(level[vc[i]]>level[vc[i+1]])
        {
            cout<<"No"<<endl;
            return 0;
        }
    }
    queue<int> q;
    q.push(1);
    for(int i=1;i<n;i++)
    {
        if(parent[vc[i]]==q.front())
        {
            q.push(vc[i]);
        }
        if(parent[vc[i]]!=q.front())
        {
            while(true)
            {
                q.pop();
                if(q.size()==0)
                {
                    cout<<"No"<<endl;
                    return 0;
                }
                if(parent[vc[i]]==q.front())
                {
                    q.push(vc[i]);
                    break;
                }
            }
            /*q.pop();
            if(parent[vc[i]]==q.front())
            {
                q.push(vc[i]);
            }
            if(parent[vc[i]]!=q.front())
            {
                cout<<"No"<<endl;
                return 0;
            }*/
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}
