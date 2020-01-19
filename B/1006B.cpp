#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,sum=0,ind=0;
    int a[2005];
    int b[2005];
    int point[2005];
    int index[2005];
    queue<int> myQueue;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+n);
    for(int i=0;i<k;i++)
    {
        point[i]=a[n-i-1];
        myQueue.push(point[i]);
        sum=sum+point[i];
    }
    cout<<sum<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<myQueue.size();j++)
        {
            int q=myQueue.front();
            myQueue.pop();
            if(q==b[i])
            {
                index[ind++]=i+1;
                break;
            }
            myQueue.push(q);
        }
        if(myQueue.size()==0)
        {
            break;
        }
    }
    sort(index,index+k);
    if(k>1)
        cout<<index[0]-0;
    for(int i=1;i<k-1;i++)
    {
        cout<<" "<<index[i]-index[i-1];
    }
    if(k==1)
    {
        cout<<n-index[k-2]<<endl;
        return 0;
    }
    cout<<" "<<n-index[k-2]<<endl;
    return 0;
}
