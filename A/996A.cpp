#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a=n/100;
    int remA=n%100;
    int b=remA/20;
    int remB=remA%20;
    int c=remB/10;
    int remC=remB%10;
    int d=remC/5;
    int remD=remC%5;
    int e=remD/1;
    int sum=a+b+c+d+e;
    cout<<sum<<endl;
    return 0;
}
