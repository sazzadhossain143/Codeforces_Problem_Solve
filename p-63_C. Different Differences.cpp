#include<bits/stdc++.h>
#define ll long long int
#define vp vector<pair<int,int>>
#define pb push_back
using namespace std;
//https://codeforces.com/contest/1772/problem/C
int main()
{

    int t;cin>>t;
    while(t--){
        ll n,k;cin>>k>>n;
        if(k==n)for(int i=1; i<=n; i++)cout<<i<<" ";
        else {
            int sum=1;
            for(int i=1,j=0; i<=k; i++,j++){
                if(sum+j<=n && sum+j+(k-i)<=n)sum+=j;
                else sum++;
                cout<<sum<<" ";
            }
        }
        cout<<endl;

    }

return 0;
}

