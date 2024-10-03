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
//https://codeforces.com/contest/160/problem/A
int main()
{
    //cout<<(1/2)+1<<endl;
    int n;cin>>n;
    vector<int>v;
    ll sum=0,nd,cnt=0;
    fri{
        int x;cin>>x;
        v.pb(x);
        sum+=x;
    }
    srt(v);rev(v);
    nd=(sum/2);
    ll sum1=0;
    for(int i=0; i<n; i++){
        sum1+=v[i];cnt++;
        if(sum1>nd)break;
    }
    cout<<cnt<<endl;



    return 0;

}

