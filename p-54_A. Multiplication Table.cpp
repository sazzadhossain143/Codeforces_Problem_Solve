#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define maximum INT_MIN
#define minimum INT_MAX
#define fr for(int i=0; i<n; i++)
#define vp vector<pair<int,int>>
using namespace std;
https://codeforces.com/contest/577/problem/A
int main()
{
    ll n,x;
    cin>>n>>x;
    int ct=0;
    for(ll i=1; i<=n; i++){
        if(x/i<=n && x%i==0)ct++;
    }
    cout<<ct<<endl;




    return 0;

}
