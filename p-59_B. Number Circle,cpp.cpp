#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define maximum INT_MIN
#define minimum INT_MAX
#define fr for(int i=0; i<n; i++)
#define vp vector<pair<int,int>>
#define srt(v) sort(v.begin(),v.end())
#define rev(v) reverse(v.begin(),v.end())
using namespace std;
//https://codeforces.com/contest/1189/problem/B
int main()
{
    int n;
    cin>>n;
    vector<ll>v;
    fr
    {
        ll a;
        cin>>a;
        v.pb(a);
    }
    srt(v);
    //rev(v);
    swap(v[n-2],v[n-1]);
    //swap(v[0],v[1]);
//    fr
//    {
//        cout<<v[i]<<" ";
//    }
    if(v[n-1]+v[n-3]<=v[n-2])cout<<"NO"<<endl;
    //else if(v[n-1]+v[1]<=v[0])cout<<"NO"<<endl;
    //if(v[n-2]+v[0]<=v[n-1])cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        fr
        {
            cout<<v[i]<<" ";
        }
    }





    return 0;

}

