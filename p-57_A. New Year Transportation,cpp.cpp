#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define maximum INT_MIN
#define minimum INT_MAX
#define fr for(int i=0; i<n; i++)
#define vp vector<pair<int,int>>
using namespace std;
https://codeforces.com/contest/500/problem/A
int main()
{
   int n,t;cin>>n>>t;
   vector<int>v;
   for(int i=1; i<n; i++)
   {
       int a;cin>>a;
       v.pb(a);
   }
   int f=0;
   for(int i=1; i<n; i++)
   {
       if(i+v[i-1]==t){f=1;break;}
       //if(i+v[i-1]>t){f=0;break;}
       i=i+v[i-1]-1;
   }
   if(f==1)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;


    return 0;

}
