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
//https://codeforces.com/problemset/problem/919/B
void solve()
{
    ll a=117;
    vector<string>v={"19","28","37","46","55","64","73","82","91","109"};
    while(1){
        string s=to_string(a);
        int sum=0;
        for(int i=0; i<s.size(); i++){
            sum+=s[i]-'0';
        }
        if(sum==10){
            v.pb(s);
            a+=9;
        }
        else a++;
        if(v.size()>10000)break;
    }
//    for(int i=0; i<v.size(); i++){
//        cout<<v[i]<<endl;
//    }
    int k;cin>>k;
    cout<<v[k-1]<<endl;
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


//    string s="Sazad";
//    s.insert(s.begin()+2,1,'z');
//    cout<<s<<endl;
