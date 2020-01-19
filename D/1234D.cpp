#include<bits/stdc++.h>
using namespace std;

#define mx 100005

string s;

struct letter
{
    int a[27];
    letter()
    {
        for(int i=0; i<27; i++)a[i]=0;
    }
};

letter tree[4*mx];

void build(int node,int st,int ed)
{
    if(st==ed)
    {
        tree[node].a[1+s[st]-'a']++;
        return;
    }

    int leftNode=node*2;
    int rightNode=node*2+1;

    int mid=(st+ed)/2;

    build(leftNode,st,mid);
    build(rightNode,mid+1,ed);

    for(int i=1; i<=26; i++)
    {
        tree[node].a[i]=tree[leftNode].a[i]+tree[rightNode].a[i];
    }
}

letter query(int node,int st,int ed,int i,int j)
{
    if(i>ed || j<st)
    {
        letter Ltr;
        return Ltr;
    }
    if(st>=i && ed<=j)return tree[node];

    int leftNode=node*2;
    int rightNode=node*2+1;

    int mid=(st+ed)/2;

    letter p1=query(leftNode,st,mid,i,j);
    letter p2=query(rightNode,mid+1,ed,i,j);

    letter p3;
    for(int i=1; i<=26; i++)
    {
        p3.a[i]=p1.a[i]+p2.a[i];
    }

    return p3;
}

void update(int node,int st,int ed,int i,char newCh, char curCh)
{
    if(i>ed || i<st)return;
    if(st==i && ed==i)
    {
        tree[node].a[1+curCh-'a']--;
        tree[node].a[1+newCh-'a']++;
        return;
    }

    int leftNode=node*2;
    int rightNode=node*2+1;
    int mid=(st+ed)/2;

    update(leftNode,st,mid,i,newCh,curCh);
    update(rightNode,mid+1,ed,i,newCh,curCh);

    for(int i=1; i<=26; i++)
    {
        tree[node].a[i]=tree[leftNode].a[i]+tree[rightNode].a[i];
    }
}


int main()
{
    cin>>s;
    s=" "+s;

    int L=1, R=s.size()-1;

    build(1,L,R);

    int q;
    cin>>q;

    while(q--)
    {
        int type;
        cin>>type;

        if(type==1)
        {
            int pos;
            cin>>pos;

            char ch;
            cin>>ch;

            update(1,L,R,pos,ch,s[pos]);
            s[pos]=ch;
        }
        if(type==2)
        {
            int l,r;
            cin>>l>>r;
            letter Ltr=query(1,1,s.size()-1,l,r);

            int ans=0;
            for(int i=1; i<=26; i++)
            {
                if(Ltr.a[i])ans++;
            }

            cout<<ans<<endl;
        }
    }

    return 0;
}
