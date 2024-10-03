#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define maximum INT_MIN
#define minimum INT_MAX
#define fr for(int i=0; i<n; i++)
#define frj for(int j=0; i<m; i++)
#define vp vector<pair<int,int>>
#define srt(v) sort(v.begin(),v.end())
#define srt(s) sort(s.begin(),s.end())
#define rev(v) reverse(v.begin(),v.end())
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
using namespace std;
//https://codeforces.com/contest/1616/problem/B
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s,s2;cin>>s;
        if(s[0]==s[1])cout<<s[0]<<s[1]<<endl;
        else{
        s2+=s[0];
        for(int i=1; i<n; i++)
        {
            if(s2[i-1]>=s[i])s2+=s[i];
            else break;
        }
        cout<<s2;
        reverse(s2.begin(),s2.end());
        cout<<s2<<endl;}
    }



    return 0;

}

