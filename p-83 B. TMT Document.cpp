#include<bits/stdc++.h>
#define ll long long
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
//https://codeforces.com/contest/1509/problem/B
int main()
{

    int tt;cin>>tt;
    while(tt--)
    {
        int n;cin>>n;
        string s;cin>>s;
        int t=0,m=0,a=0,b=0,f=0;
        for(int i=0,j=n-1; i<n; i++,j--)
        {
            if(s[i]=='T')t++;
            if(s[i]=='M')m++;
            if(t<m){f=1;break;}
            if(s[j]=='T')a++;
            if(s[j]=='M')b++;
            if(a<b){f=1;break;}
        }
        if(f==0 && t==m*2)yes;
        else no;
    }

    return 0;

}
