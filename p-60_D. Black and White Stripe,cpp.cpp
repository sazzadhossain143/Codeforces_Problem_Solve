#include<bits/stdc++.h>
#define ll long long
using namespace std;
//https://codeforces.com/contest/1690/problem/D
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        ll int k,n;
        cin>>n>>k;
        cin>>s;
        ll int cnt;
        ll int mn=10000000;
        cnt=0;
        for(ll int i=0; i<k; i++)
        {
            if(s[i]=='W')
            {
                cnt++;
            }
        }
        mn=min(mn,cnt);
        for(ll int j=0; j<n-k; j++)
        {
            if(s[j]=='W')cnt--;
            if(s[j+k]=='W')cnt++;
            mn=min(mn,cnt);

        }

        cout<<mn<<endl;
    }
    return 0;

}
