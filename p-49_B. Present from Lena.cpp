#include<bits/stdc++.h>
#define ll long long
using namespace std;
//https://codeforces.com/contest/118/problem/B
int main()
{
   int r,c,n;
   cin>>n;

   for(r=0; r<=n; r++)
   {
       for(c=1; c<=n-r; c++)
       {
           cout<<"  ";
       }
       for(c=0; c<=r; c++)
       {
           cout<<c;
           if(r>0)cout<<" ";
       }
       for(c=r; c>=0; c--)
       {
           if(c==r)
           {
               c=r-1;
               if(c>=0)cout<<c;
               if(c>0)cout<<" ";
           }
           else {cout<<c;if(c>0)cout<<" ";}
       }

       cout<<endl;
   }
   for(r=n-1; r>=0; r--)
   {
       for(c=1; c<=n-r; c++)
       {
           cout<<"  ";
       }
       for(c=0; c<=r; c++)
       {
           cout<<c;
           if(r>0)cout<<" ";
       }
       for(c=r; c>=0; c--)
       {
           if(c==r)
           {
               c=r-1;
               if(c>=0)cout<<c;
               if(c>0)cout<<" ";
           }
           else {cout<<c;if(c>0)cout<<" ";}
       }

       cout<<endl;
   }

}
