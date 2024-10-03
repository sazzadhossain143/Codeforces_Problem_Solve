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
//https://codeforces.com/problemset/problem/1838/B
void solve(){

    int t;cin>>t;
    while(t--){
    ll n;cin>>n;
    map<int,int>m;
    fri{
        int a;cin>>a;
        m.insert({a,i});
    }
    if(m[1]<m[2] && m[2]<m[n])cout<<m[2]+1<<" "<<m[n]+1<<endl;
    else if(m[1]>m[2] && m[1]<m[n])cout<<m[1]+1<<" "<<m[n]+1<<endl;
    else if(m[1]<m[2] && m[1]>m[n])cout<<m[1]+1<<" "<<m[n]+1<<endl;
    else if(m[1]>m[2] && m[2]>m[n])cout<<m[2]+1<<" "<<m[n]+1<<endl;
    else cout<<m[1]+1<<" "<<m[2]+1<<endl;
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


return 0;
}

