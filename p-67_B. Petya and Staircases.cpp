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
//https://codeforces.com/contest/362/problem/B
void solve()
{
    ll n,m; cin>>n>>m;
    if(m==0)yes;
    else{
    vector<ll>v;
    frj{ll x; cin>>x; v.pb(x);}
    srt(v);
    if(v[0]==1 || v[m-1]==n)no;
    else{
        int f=0;
        for(int i=0; i<m-2; i++){

            if(v[i+1]-v[i]==1 && v[i+2]-v[i+1]==1 ){f=1;break;}

        }
        if(f==1)no;
        else yes;
    }
    }
}
int main()
{
//    int t;
//    cin>>t;
//    while(t--)
//    {
        solve();
//    }
//




    return 0;

}

