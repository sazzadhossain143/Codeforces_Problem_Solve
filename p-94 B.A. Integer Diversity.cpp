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
//https://codeforces.com/contest/1616/problem/A
void solve()
{
    map<int,int>m;
    int n;cin>>n;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        if(a<0)a=-a;
        m[a]++;
    }
    int cnt=0;
    for(auto a:m){
        if(a.first==0)cnt++;
        else if(a.second>=2)cnt+=2;
        else cnt++;
    }

    cout<<cnt<<endl;
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


//    string s="Sazad";
//    s.insert(s.begin()+2,1,'z');
//    cout<<s<<endl;
