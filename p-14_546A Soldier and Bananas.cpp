#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w,i,total=0;
    cin>>k>>n>>w;
    for( i=1; i<=w; i++)
    {
        total=total+i*k;
    }
    int frd=total-n;
    if(total>n)
        cout<<frd<<endl;
    else
        cout<<"0"<<endl;
    return 0;
}

