#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,a,i,b,sum=0;
    cin>>n>>h;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        if(a<=h)b=1;
        else b=2;
        sum+=b;
    }
    cout<<sum<<endl;
    return 0;
}
