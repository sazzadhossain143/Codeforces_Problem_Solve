#include<bits/stdc++.h>
#define ll long long int
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
//https://codeforces.com/contest/1862/problem/A
int main()
{
    int t;cin>>t;
    string s="vika";
    while(t--){
    int n,m;cin>>n>>m;
    char ar[22][22];
    fr
    {
        for(int j=0; j<m; j++)
        {
            cin>>ar[i][j];
        }
    }

    int f=0,t=0;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(ar[j][i]==s[t]){t++;break;}
        }
        if(t==4)break;
    }

    if(t==4)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;}


    return 0;

}

