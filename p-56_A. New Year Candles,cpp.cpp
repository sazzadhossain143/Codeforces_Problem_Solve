#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define maximum INT_MIN
#define minimum INT_MAX
#define fr for(int i=0; i<n; i++)
#define vp vector<pair<int,int>>
using namespace std;
https://codeforces.com/contest/379/problem/A
int main()
{
   int a,b;cin>>a>>b;
   int sum=a;
   while(a>=b)
   {
      int c=a/b;
      sum+=c;
      a=c+(a%b);

   }
   cout<<sum<<endl;



    return 0;

}
