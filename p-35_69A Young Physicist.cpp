#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a1=0,b1=0,c1=0;
    for(int i=1; i<=n; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        a1=a1+a;
        b1=b1+b;
        c1=c1+c;
    }
    if(a1==0 && b1==0 && c1==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
