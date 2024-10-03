#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1000],b[1000],c[1000],i;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
        c[i]=b[i]-a[i];
    }
/*    for(i=0; i<n; i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;
 */  for(i=0; i<n; i++)
    {
        c[i+1]=c[i]+c[i+1];
        //cout<<c[i]<<" ";
    }
    //cout<<endl;
    int mx=c[0];
    for(i=1; i<n; i++)
    {
        if(mx<c[i])mx=c[i];

    }
    cout<<mx<<endl;


   return 0;
}

