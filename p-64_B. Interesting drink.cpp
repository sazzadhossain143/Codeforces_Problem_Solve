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
//https://codeforces.com/contest/706/problem/B
int main()
{
    int n;cin>>n;
    vector<int>v;
    fri{
        int x;cin>>x;
        v.pb(x);
    }
    srt(v);

    int q;cin>>q;
    for(int i=0; i<q; i++){
        ll m;cin>>m;
        ll cnt=upper_bound(v.begin(),v.end(),m)-v.begin(); //last positon of valu in vector
//        auto cnt=upper_bound(v.begin(),v.end(),m);
//        for(int i=0; i<n; i++){
//            if(m==v[n-1]){cnt=n;break;}
//            else if(v[i]<=m)cnt++;
//            else break;
//        }
        cout<<cnt<<endl;
    }


    return 0;

}

