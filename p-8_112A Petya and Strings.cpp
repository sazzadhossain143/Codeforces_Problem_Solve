#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100],b[100];
    cin>>a>>b;

    strlwr(a);
    strlwr(b);
    int s=strcmp(a,b);
   //cout<<a<<endl;
   //cout<<b<<endl;
   cout<<s<<endl;

    return 0;
}
