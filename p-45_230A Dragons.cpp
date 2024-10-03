#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int s,n,flag=0;
    cin>>s>>n;
    multimap<int,int>mp;
    for(int i=1; i<=n; i++)
    {
        int x,y;cin>>x>>y;
        mp.insert({x,y});
    }
    for(auto a : mp)
    {
        if(a.first<s)s+=a.second;
        else {flag=1;break;}
    }
    if(flag==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
