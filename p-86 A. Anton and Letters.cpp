#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define maximum INT_MIN
#define minimum INT_MAX
#define fri for(int i=0; i<n; i++)
#define frj for(int j=0; i<m; i++)
#define vp vector<pair<int,int>>
#define srt(v) sort(v.begin(),v.end())
#define rev(v) reverse(v.begin(),v.end())
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
using namespace std;
//https://codeforces.com/contest/443/problem/A
int main()
{
//    char a='z';printf("%d",a);
//    cout<<int(a);
    set<char>s;
    while(1){
        char a;cin>>a;
        if(a=='}')break;
        if(a>=97 && a<=122)s.insert(a);
    }
//    for(auto it:s)cout<<it<<endl;
    cout<<s.size()<<endl;



    return 0;

}

