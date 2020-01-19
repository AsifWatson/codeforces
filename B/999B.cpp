#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector<int> v;
    vector<int> :: iterator it;
    string s;
    cin>>n;
    getchar();
    getline(cin,s);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
        }
    }
    for(it=v.begin();it!=v.end();++it)
    {
        int a=*it;
        reverse(s.begin(),s.begin()+a);
    }
    cout<<s<<endl;
    return 0;
}
