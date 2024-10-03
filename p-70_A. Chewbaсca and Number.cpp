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
//https://codeforces.com/contest/514/problem/A
void solve()
{
    ll n;cin>>n;
    string s,s1;
    s=to_string(n);

    int t1,f=0;
    if(s[0]=='9'){s[0]='9';f=1;}

    for(int i=f; i<s.size(); i++){
        int t=s[i]-'0';
        if(t>=5 ){t1=9-t;
        s[i]=t1+'0';}
    }
//    ll t2=stoi(s);
    cout<<s<<endl;
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

