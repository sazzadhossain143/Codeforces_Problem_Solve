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
//https://codeforces.com/problemset/problem/11/A
void solve(){

    ll n,d;cin>>n>>d;
    vector<ll>v;
    ll f=0;
    fri{
        ll a;cin>>a;
        v.pb(a);
        if(i>0 && v[i]<=v[i-1]){
            ll c=(v[i-1]-v[i])/d;
            v[i]+=(c*d)+d;
            f+=(c+1);
//            while(1){
//                if(v[i]>v[i-1])break;
//                v[i]+=d;
//                f++;
//                cout<<c<<endl;
//                cout<<v[i]<<endl;
//                cout<<f<<endl;
//
//            }
        }
    }
    cout<<f<<endl;


}


int main()
{
//    int t;
//    cin>>t;
//    while(t--)
//    {
        solve();
//    }


return 0;
}

