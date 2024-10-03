#include<bits/stdc++.h>
#define ll long long int
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
//https://codeforces.com/problemset/problem/1864/A
int main()
{
    int x,y,n,t;cin>>t;
    while(t--){
        cin>>x>>y>>n;
        int a[n];

        a[0]=x;
        a[n-1]=y;

        int f=0;
        for(int i=n-1,j=1; i>=1; i--,j++){
            if(x <= a[i]-j){if(i>1)a[i-1]=a[i]-j;}
            else {f=1;break;}
        }
        if(f==1)cout<<-1<<endl;
        else{
            fr{
                cout<<a[i]<<" ";
            }
        }
    }

    return 0;

}

