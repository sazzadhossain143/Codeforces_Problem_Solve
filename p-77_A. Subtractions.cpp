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
//https://codeforces.com/problemset/problem/267/A
void solve(){
    ll a,b,x=0,y=0; cin>>a>>b;
    while(1){

    if(a<b){
        x+=b/a;
        //if(b%a!=0)y+=a/(b%a);
        b=b%a;
    }
    else{
        x+=a/b;
        //if(a%b!=0)y+=b/(a%b);
        a=a%b;
    }
     if(a==b || b==0 || a==0)break;
    }
    cout<<x<<endl;
//    cout<<x<<" "<<(b%a)<<" "<<y<<endl;
//    cout<<(987654321/7)+(7/(987654321%7))<<endl;



}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }


return 0;
}

