#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define maximum INT_MIN
#define minimum INT_MAX
#define fri for(int i=0; i<n; i++)
#define frj for(int j=0; i<m; i++)
#define vp vector<pair<int,int>>
#define srt(v) sort(v.begin(),v.end())
#define srt(s) sort(s.begin(),s.end())
#define rev(v) reverse(v.begin(),v.end())
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
using namespace std;
//https://codeforces.com/contest/1841/problem/B
void solve(){
    ll q;
    cin>>q;
    vector<ll>v,v1;
    int f=0;
    for(ll i=0; i<q; i++)
    {
        ll x;
        cin>>x;
        if(v.empty())
        {
            v.pb(x);
            v1.pb(1);
        }
        else if(f==0)
        {
            if(v.back()<=x)   /// v.back() je value last push back kora hoise
            {
                v.pb(x);
                v1.pb(1);
            }
            else if(v[0]<x)v1.pb(0);
            else
            {
                f=1;
                v1.pb(1);
                v.pb(x);
            }
        }
        else
        {
            if(v.back()>x )v1.pb(0);
            else if(v[0]<x)v1.pb(0);
            else
            {
                v1.pb(1);
                v.pb(x);
            }
        }
    }
    for(ll i=0; i<q; i++)
    {
        cout<<v1[i];
    }
    cout<<endl;
}
int main()
{
    int t; cin>>t;
    while(t--){
        solve();
    }



//    for(ll i=0; i<v.size(); i++)
//    {
//        cout<<v[i]<<" ";
//    }

    return 0;

}

