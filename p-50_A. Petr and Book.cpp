#include<bits/stdc++.h>
#define ll long long
using namespace std;
//https://codeforces.com/contest/139/problem/A
int main()
{
    int n,cnt;
    cin>>n;
    int sum=0;
    int a[8];
    for(int i=1; i<=7; i++)
    {
        cin>>a[i];
    }
    while(sum<n)
    {
        for(int i=1; i<=7; i++)
        {
            if(sum<n)sum+=a[i];
            if(sum>=n){cnt=i;break;}
        }
    }
    cout<<cnt<<endl;


}
