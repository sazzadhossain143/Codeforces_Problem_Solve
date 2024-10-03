#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define maximum INT_MIN
#define minimum INT_MAX
#define fr for(int i=0; i<n; i++)
#define vp vector<pair<int,int>>
using namespace std;
https://codeforces.com/contest/476/problem/A
int main()
{

    int n,m;cin>>n>>m;
    if(n<m)cout<<-1<<endl;
    else{
        int a=ceil((float)n/2);
        int f=0;
        for(int i=a; i<=n; i++)
        {
            if(i%m==0){cout<<i<<endl;f=1;break;}

        }
        if(f==0)cout<<-1<<endl;
    }



    return 0;

}
