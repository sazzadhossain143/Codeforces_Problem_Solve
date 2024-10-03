#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define maximum INT_MIN
#define minimum INT_MAX
#define fri for(int i=0; i<n; i++)
#define frj for(int j=0; i<m; i++)
#define vp vector<pair<int,int>>
#define srt(v) sort(v.begin(),v.end())
#define rev(v) reverse(v.begin(),v.end())
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
using namespace std;
//https://codeforces.com/contest/1682/problem/B
int main()
{
    //cout<<(1&2);
    int t;cin>>t;
    while(t--){
        vector<ll>v;
        int n;
        cin>>n;

        for(ll i=0; i<n; i++){
            ll x;cin>>x;
            if(x!=i)v.pb(x);
        }
//        srt(v);
//        cout<<v[0]<<endl;
        ll a=v[0];
        for(ll i=1; i<v.size(); i++)a=(a&v[i]);
        cout<<a<<endl;
    }


    return 0;

}

