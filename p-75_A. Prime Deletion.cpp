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
//https://codeforces.com/problemset/problem/1861/A
void solve(){
    map<char,int>m;
    for(int i=1; i<=9; i++){
        char a;cin>>a;
        m.insert({a,i});
    }
    if(m['1']>m['3'])cout<<31<<endl;
    else cout<<13<<endl;



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

