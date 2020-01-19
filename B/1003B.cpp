#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,x;
    cin>>a>>b>>x;
    list<int> l;
    list<int>::iterator it;
    if(a>b)///starting 0;
    {
        for(int i=1; i<=x+1; i++)
        {
            if(i&1)
            {
                l.push_back(0);
                a--;
                continue;
            }
            l.push_back(1);
            b--;
        }
        l.pop_back();
        if(x&1)///starting 0,ending 1;
        {
            for(int i=1; i<=a; i++)
            {
                l.push_back(0);
            }
            l.push_back(1);
            for(int i=1; i<=b; i++)
            {
                l.push_back(1);
            }
        }
        else///starting 0,ending 0;
        {
            for(int i=1; i<=b; i++)
            {
                l.push_back(1);
            }
            l.push_back(0);
            for(int i=1; i<=a; i++)
            {
                l.push_back(0);
            }
        }

        for(it=l.begin(); it!=l.end(); ++it)
            cout<<*it;
    }
    else
    {
        for(int i=1; i<=x+1; i++)
        {
            if(i&1)
            {
                l.push_back(1);
                b--;
                continue;
            }
            l.push_back(0);
            a--;
        }
        l.pop_back();
        if(x&1)///starting 1,ending 0;
        {
            for(int i=1; i<=b; i++)
            {
                l.push_back(1);
            }
            l.push_back(0);
            for(int i=1; i<=a; i++)
            {
                l.push_back(0);
            }
        }
        else///starting 1,ending 1;
        {
            for(int i=1; i<=a; i++)
            {
                l.push_back(0);
            }
            l.push_back(1);
            for(int i=1; i<=b; i++)
            {
                l.push_back(1);
            }
        }

        for(it=l.begin(); it!=l.end(); ++it)
            cout<<*it;
    }
    return 0;
}

