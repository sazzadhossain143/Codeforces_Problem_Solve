#include<bits/stdc++.h>
#define ll long long int
#define vp vector<pair<int,int>>
#define pb push_back
using namespace std;
//https://codeforces.com/contest/233/problem/A
void solve(){
    int n;
    cin>>n;
    vector<int>v,v2;
    if(n%2!=0)cout<<-1<<endl;
    else
    {
        for(int i=1; i<=n; i++)
        {
            v.pb(i);
        }
        for(int i=0; i<n; i++)
        {
//            if(n%2==0){
                v2.pb(v[i+1]);
                v2.pb(v[i]);
                i++;
//            }
//            else{
//                if(i==n-1){
//                    v2.pb(v[i]);
//                    swap(v2[i-1],v2[i]);
//                }
//                else{
//                    v2.pb(v[i+1]);
//                    v2.pb(v[i]);
//                    i++;
//                }
//            }
        }
        for(int i=0; i<n; i++){
            cout<<v2[i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
//    int t;
//    cin>>t;
//    while(t--)
//    {
        solve();
//    }
//cout<<(51&1)<<endl;
return 0;
}

