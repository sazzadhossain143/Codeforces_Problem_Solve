#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char s[n];
    cin>>s;
    int a=0,d=0;
    for(auto t:s)
    {
        if(t=='A')a++;
        else if(t=='D')d++;
    }
    //cout<<a<<endl<<d<<endl;
    if(a>d)cout<<"Anton"<<endl;
    else if(a<d)cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;

   return 0;
}

