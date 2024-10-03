#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100],t[100];
    cin>>s;
    cin>>t;
    strrev(s);
    //cout<<s<<endl;
    //cout<<t<<endl;
    //int n=strcmp(s,t);
    //cout<<n<<endl;
    if(strcmp(s,t))cout<<"NO"<<endl;
    else cout<<"YES"<<endl;


   return 0;
}

