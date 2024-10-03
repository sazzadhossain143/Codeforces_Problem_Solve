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
//https://codeforces.com/problemset/problem/94/A
void solve(){
    string s; cin>>s;
    vector<int>v1;
    map<int,string>v;
    for(int i=0; i<10; i++){
        string a; cin>>a;
        v.insert({i,a});
    }

    for(int i=0; i<s.size(); i+=10){
        for(int j=0; j<10; j++){
            if(v[j]==s.substr(i,10)){
            v1.push_back(j);break;}
        }
    }
    for(int i=0; i<v1.size(); i++){
        cout<<v1[i];
    }
    cout<<endl;

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
//is_sorted(e.begin(), e.end()
