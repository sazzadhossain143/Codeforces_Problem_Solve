#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define maximum INT_MIN
#define minimum INT_MAX
#define fr for(int i=0; i<n; i++)
#define vp vector<pair<int,int>>
using namespace std;
https://codeforces.com/contest/456/problem/A
int main()
{
    int n;cin>>n;
    vp v;
    fr{
        int a,b;cin>>a>>b;
        v.pb({a,b});
    }
    int f=0;
    sort(v.begin(),v.end());
    for(int i=0; i<n-1; i++){
        if(v[i].first<=v[i].second && v[i].second>v[i+1].second){f=1;break;}
    }
    if(f==1)cout<<"Happy Alex"<<endl;
    else cout<<"Poor Alex"<<endl;



    return 0;

}
