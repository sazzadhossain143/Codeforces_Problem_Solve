#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define maximum INT_MIN
#define minimum INT_MAX
#define fr for(int i=0; i<n; i++)
#define vp vector<pair<int,int>>
using namespace std;
//https://codeforces.com/problemset/problem/1850/D
int main()
{
    int t;cin>>t;
    while(t--){
    ll n,k;cin>>n>>k;
    vector<ll>v;
    fr{
        ll a;cin>>a;
        v.pb(a);
    }
    sort(v.begin(),v.end());
    ll cnt=0, mx=0;
    for(ll i=0; i<n-1; i++){
        if(v[i+1]-v[i]<=k)cnt++;
        else cnt=0;
        mx=max(cnt,mx);
    }
    cout<<n-(mx+1)<<endl;

}





    return 0;

}
