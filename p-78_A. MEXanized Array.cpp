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
//https://codeforces.com/contest/1870/problem/A
void solve()
{
    int n,k,x;cin>>n>>k>>x;
    if(k>n || k>x+1)cout<<-1<<endl;
    else{
    int sum=0,i=0;
    while(n--){
        if(i==k ){
            if(i!=x)i=x;
            else i=k-1;
        }
            sum+=i;

        if(i<=k)i++;
    }
    cout<<sum<<endl;
    }


}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

}
