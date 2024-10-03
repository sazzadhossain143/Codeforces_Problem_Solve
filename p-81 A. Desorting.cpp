#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define maximum INT_MIN
#define minimum INT_MAX
#define fr for(int i=0; i<n; i++)
#define frj for(int j=0; i<m; i++)
#define vp vector<pair<int,int>>
#define srt(v) sort(v.begin(),v.end())
#define rev(v) reverse(v.begin(),v.end())
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
using namespace std;
//https://codeforces.com/contest/1853/problem/A
int main()
{
    int t;cin>>t;
    while(t--){
    int n;cin>>n;
    vector<ll>v;
    fr{
        ll a;cin>>a;
        v.pb(a);
    }
    ll ans=0,mn=minimum,y,z,f=0;
    for(int i=0; i<n-1; i++)
    {
        if(v[i]>v[i+1]){f=1;break;}
        ll x=v[i+1]-v[i];
        mn=min(mn,x);
        if(mn==x){y=i;z=i+1;}

    }

    //cout<<y<<" "<<z<<" "<<mn<<endl;
    if(f==1)cout<<ans<<endl;
    else if(mn==0)cout<<ans+1<<endl;
    else{
//        while(v[y]<=v[z]){
//            v[y]++;
//            v[z]--;
//            ans++;
//        }
        ans=((v[z]-v[y])/2)+1;
        cout<<ans<<endl;
    }
}

    return 0;

}
