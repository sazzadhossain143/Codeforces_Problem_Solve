#include<bits/stdc++.h>
#define ll long long
using namespace std;
//https://codeforces.com/contest/499/problem/B
int main()
{
    int n,m;cin>>n>>m;
    string a,b,s2[n+1];

    map<string,string>mp;
    for(int i=1; i<=m; i++)
    {
        cin>>a>>b;
        int l1=a.length();
        int l2=b.length();
        //int mx=max(l1,l2);
        if(l1>=l2){if(l1==l2){mp.insert({a,a});mp.insert({b,b});}
        else {mp.insert({a,b});mp.insert({b,b});}}
        else {mp.insert({b,a});mp.insert({a,a});}

    }
    for(int i=1; i<=n; i++)
    {
        cin>>s2[i];
    }
    for(int i=1; i<=n; i++)
    {
        cout<<mp.at(s2[i])<<" ";
    }





    return 0;

}
