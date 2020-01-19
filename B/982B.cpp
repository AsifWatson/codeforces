#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int arr[200010];
    char str[400010];
    cin>>n;
    map<int,int> m;
    stack<int> st1;
    stack<int> st2;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        m[arr[i]]=i+1;
    }
    sort(arr, arr+n, greater<int>());
    for(int i=0;i<n;i++)
    {
        st1.push(m[arr[i]]);
        //cout<<st1.top()<<" ";
    }
    scanf("%s",str);
    int l=strlen(str);
    for(int i=0;i<l-1;i++)
    {
        if(str[i]=='0')
        {
            cout<<st1.top()<<" ";
            st2.push(st1.top());
            st1.pop();
        }
        if(str[i]=='1')
        {
            cout<<st2.top()<<" ";
            st2.pop();
        }
    }
    cout<<st2.top()<<endl;
    return 0;
}
