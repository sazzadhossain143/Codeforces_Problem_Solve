#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define maximum INT_MIN
#define minimum INT_MAX
#define fr for(int i=0; i<n; i++)
#define vp vector<pair<int,int>>
using namespace std;
https://codeforces.com/contest/1225/problem/B1
int main()
{

    int t; cin>>t;

    while(t--)
    {
        vector<int>v;
        int n,k,d;cin>>n>>k>>d;
        fr{
            int a;cin>>a;
            v.pb(a);
        }
        int mn=103;
        for(int i=0; i<=n-d; i++){
            int mark[k+1];memset(mark,-1,sizeof(mark));
//            if(mark[v[i]]==-1)cout<<1;
//            else cout<<0;
            int cnt=0;
            for(int j=i; j<d+i; j++)
            {
                if(mark[v[j]]==-1){cnt++;mark[v[j]]=1;}

            }
            mn=min(mn,cnt);
        }
        cout<<mn<<endl;
    }


    return 0;

}
