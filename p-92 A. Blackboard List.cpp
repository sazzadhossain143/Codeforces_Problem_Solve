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
//https://codeforces.com/contest/1838/problem/A
void solve(){
    vector<ll>v;
    int f=0;
    int n;cin>>n;
    fri{
        ll x; cin>>x;
        if(0>x)f=1;
        v.pb(x);
    }
    srt(v);
    if(f==1)cout<<v[0]<<endl;
    else cout<<v[v.size()-1]<<endl;
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

