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
//https://codeforces.com/problemset/problem/1832/B
void solve(){
    ll sum=0,s1=0,s2=0,n,k; cin>>n>>k;
    vector<ll>v,v1,v2;
    for(ll i=0; i<n; i++){
        ll a;cin>>a;
        sum+=a;
        v.pb(a);
    }
    srt(v);

    for(ll i=0,j=n-1; i<n; i++,j--){
        s1+=v[i];v1.pb(s1);
        s2+=v[j];v2.pb(s2);
    }

    ll x,y,ans,ans1,ans2,t1=sum,t2=sum;
    x=sum-v1[(k*2)-1];
    y=sum-v2[k-1];
    ans=max(x,y);

    ll mx=0,x1,y1;
    for(int i=1,j=k-1; i<k; i++,j--){
        x1=v1[(i*2)-1];
        y1=v2[j-1];
        ans1=sum-(x1+y1);
        mx=max(ans1,mx);
    }
//    ll x1,y1;
//    while(k--){
//        x1=t1-(v[0]+v[1]);
//        y1=t1-v[v.size()-1];
//        if(x1>y1){
//            ans1=x1;
//            t1=x1;
//            v.erase(v.begin()+0);
//            v.erase(v.begin()+0);
//        }
//        else{
//            ans1=y1;
//            t1=y1;
//            v.pop_back();
//        }
//    }
    ans2=max(mx,ans);
    cout<<ans2<<endl;


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

