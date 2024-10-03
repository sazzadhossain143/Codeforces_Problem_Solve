#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
   /* string s=to_string(n);
    int temp=n;
        vector<int>v;
        for(int l=0; l<s.size(); l++)
        {
            int rem=temp%10;
            v.push_back(rem);
            temp=temp/10;
        }
        //for(auto a:v)cout<<a<<endl;
   //cout<<v.size()<<endl;
    int flag=0;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]==4 || v[i]==7){flag=0;}
        else {flag=1;break;}
    }
    //cout<<"flag = "<<flag<<endl;
    if(flag==0)cout<<"YES"<<endl;*/
    if((n%4==0)  || (n%7==0) || (n%44==0)|| (n%47==0)|| (n%74==0)|| (n%77==0)|| (n%444==0)|| (n%447==0)|| (n%474==0)|| (n%477==0)|| (n%744==0) || (n%747==0)|| (n%774==0)|| (n%777==0))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
