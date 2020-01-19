#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    int a[n+2];
    char str[n+2];
    scanf("%s",str);
    for(int i=0;i<n;i++)
    {
        int x=str[i]-'0';
        sum+=x;
        a[i]=sum;
    }
    /*for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;*/
    int div;
    for(int i=2;i<=n;i++)
    {
        int sum2=sum;
        if(sum2%i==0)
        {
            set<int> st;
            div=sum2/i;
            for(int k=0;k<i;k++)
            {
                st.insert(sum2);
                ///cout<<sum2<<endl;
                sum2-=div;
            }
            for(int j=0;j<n;j++)
            {
                if(st.count(a[j])>0)
                {
                    st.erase(a[j]);
                }
            }
            if(st.size()==0)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
