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
//https://codeforces.com/problemset/problem/1794/A
void solve(){
    int n; cin>>n;
    vector<string>v;
    vector<string>v1;
    for(int i=0; i<(2*n)-2; i++){
        string s; cin>>s;
        if(s.size()==n-1)v.pb(s);
        if(s.size()==1)v1.pb(s);

    }
    string s1,s2;
    if(v1[0]==v1[1]){
         s1=v[0];
         s2=v[1];
         reverse(s2.begin(),s2.end());
         if(s1==s2)yes;
         else no;

    }
    else no;


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
//is_sorted(e.begin(), e.end()
