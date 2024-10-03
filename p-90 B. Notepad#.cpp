#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define maximum INT_MIN
#define minimum INT_MAX
#define fri for(int i=0; i<n; i++)
#define frj for(int j=0; i<m; i++)
#define vp vector<pair<int,int>>
#define srt(v) sort(v.begin(),v.end())
#define srt(s) sort(s.begin(),s.end())
#define rev(v) reverse(v.begin(),v.end())
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
using namespace std;
//https://codeforces.com/contest/1766/problem/B
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    set<string>st;
    int cnt=0;
//    if(n<2)no;
//    else
//    {
        for(int i=0; i<n-1; i++)
        {
            string c=s.substr(i,2);
            st.insert(c);
            if(i<n-2)
            {
                string c1=s.substr(i+1,2);
                if(c1==c)
                {
                    i++;cnt++;
                }
            }
//            c=s.substr(i,2);

//            cnt++;
        }
//        cout<<cnt<<endl;
//    for(auto a : st)cout<<a<<" ";cout<<endl;
//    cout<<st.size()<<endl;
        if(st.size()+cnt<n-1)yes;
        else no;
//        if(st.size()!=cnt)yes;
//        else no;
//    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }





    return 0;

}

