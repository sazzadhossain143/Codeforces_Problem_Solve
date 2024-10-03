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
//https://codeforces.com/problemset/problem/48/A
void solve(){
    string a,b,c;cin>>a>>b>>c;
    //if(a==b==c || a!=b && b!=c)cout<<"?"<<endl;
    if((a=="paper" && b=="rock" && c=="rock") ||
            (a=="rock" && b=="scissors" && c=="scissors") ||
            (a=="scissors" && b=="paper" && c=="paper"))cout<<"F"<<endl;
    else if((b=="paper" && a=="rock" && c=="rock") ||
            (b=="rock" && a=="scissors" && c=="scissors") ||
            (b=="scissors" && a=="paper" && c=="paper"))cout<<"M"<<endl;
    else if((c=="paper" && a=="rock" && b=="rock") ||
            (c=="rock" && a=="scissors" && b=="scissors") ||
            (c=="scissors" && a=="paper" && b=="paper"))cout<<"S"<<endl;
    else cout<<"?"<<endl;




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

