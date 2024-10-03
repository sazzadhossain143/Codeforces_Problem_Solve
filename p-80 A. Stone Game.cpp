#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define maximum INT_MIN
#define minimum INT_MAX
#define fr for(int i=0; i<n; i++)
#define vp vector<pair<int,int>>
using namespace std;
//https://codeforces.com/contest/1538/problem/A
int main()
{
    int t;cin>>t;
    while(t--){
    int n;
    cin>>n;
    //int ar[n];for cin>>ar[i];
    vp v;
    fr{int a; cin>>a; v.pb({a,i});}
//    fr{cout<<v[i].first<<" "<<v[i].second<<endl;}
    sort(v.begin(),v.end());
//    cout<<endl;
//    cout<<v[0].second+1<<" "<<v[n-1].second+1<<endl;
//    cout<<n-v[0].second<<" "<<n-v[n-1].second<<endl;

    int x,y,z,w,a;
    x=max(v[0].second+1,v[n-1].second+1);
    y=max(n-v[0].second,n-v[n-1].second);
    z=(v[0].second+1)+(n-v[n-1].second);
    w=(n-v[0].second)+(v[n-1].second+1);

    a=min(min(x,w),min(y,z));
    cout<<a<<endl;
}

    return 0;

}
