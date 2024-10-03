#include<bits/stdc++.h>
#define ll long long
using namespace std;
//https://codeforces.com/problemset/problem/466/A
int main()
{
    int n,m,a,b,cnt=0,sum;
    cin>>n>>m>>a>>b;

    int mn=INT_MAX;
    if(m>=n)mn=b;
    for(int i=0; i<n; i++)
    {
        sum=(i*b)+((n-i*m)*a);
        if(i*m>n)break;
        if(sum<=mn)mn=sum;

    }
    int x=min((n/m)*b+(n%m!=0? b:0),mn);
    if(x<=mn)mn=x;

    cout<<mn<<endl;
}
