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
//https://codeforces.com/problemset/problem/166/A
void solve()
{
    int n,k;cin>>n>>k;
    k=k-1;
    vp v;
    int p,t;
    fri{
        cin>>p>>t;
        v.pb({p,t*-1});
    }
    //srt(v);//rev(v);
    sort(v.rbegin(),v.rend());
    int f2=0;
    for(int i=0; i<v.size(); i++){
        if(v[i].first==v[k].first){
            if(v[i].second==v[k].second){
                f2++;
            }
        }

    }
//    cout<<endl;
//    for(auto a:v)cout<<a.first<<" "<<a.second<<endl;

    cout<<f2<<endl;

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

