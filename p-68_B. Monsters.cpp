#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define maximum INT_MIN
#define minimum INT_MAX
#define fri for(int i=0; i<n; i++)
#define frj for(int j=0; j<m; j++)
#define vp vector<pair<int,int>>
#define srt(v) sort(v.begin(),v.end())
#define srt(s) sort(s.begin(),s.end())
#define rev(v) reverse(v.begin(),v.end())
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
using namespace std;
//https://codeforces.com/contest/1849/problem/B
void solve()
{
    ll n,k;cin>>n>>k;
    vector<ll>v;
    vp v1;
    fri{
        ll a;cin>>a;
        ll x;
        if(a%k==0){x=0;v.pb(i+1);}
        else {x=(a%k)*-1;
        v1.pb({x,i+1});}
    }
    sort(v1.begin(),v1.end());
    for(ll i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    for(ll i=0; i<v1.size(); i++){
        cout<<v1[i].second<<" ";
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }


    return 0;

}

