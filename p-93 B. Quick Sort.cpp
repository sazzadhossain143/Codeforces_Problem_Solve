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
//https://codeforces.com/problemset/problem/1768/B
void solve(){
    int n,k;cin>>n>>k;
    vector<int>v;
    for(int i=0; i<n; i++){
        int a;cin>>a;
        v.pb(a);
    }
    int j=0;
    for(int i=0; i<n; i++){
        if(v[i]==j+1)j++;
    }
    int ans=0;
    if(j==0)cout<<ans<<endl;
    else{
    ans=((n-j)+k-1)/k;
    cout<<ans<<endl;}
    //cout<<ceil(ans)<<endl;

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

