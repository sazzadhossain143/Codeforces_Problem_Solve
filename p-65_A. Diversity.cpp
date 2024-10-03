#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define maximum INT_MIN
#define minimum INT_MAX
#define fri for(int i=0; i<n; i++)
#define frj for(int j=0; i<m; i++)
#define vp vector<pair<int,int>>
#define srt(v) sort(v.begin(),v.end())
#define srt(s) sort(s.begin(),s.end())
#define rev(v) reverse(v.begin(),v.end())
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
using namespace std;
//https://codeforces.com/contest/844/problem/A
int main()
{
    string s;cin>>s;
    int k;cin>>k;
    set<char>c;
    for(int i=0; i<s.size(); i++){
        c.insert(s[i]);
    }
    if(s.size()<k)cout<<"impossible"<<endl;
    else{

        if(c.size()<=k)cout<<k-c.size()<<endl;
        else cout<<"0"<<endl;
    }
    //cout<<c.size()<<endl;


    return 0;

}

