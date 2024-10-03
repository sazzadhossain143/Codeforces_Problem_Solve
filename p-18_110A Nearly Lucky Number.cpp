#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    long long int n;
    //cin>>n;
    string s;
    cin>>s;
    cout<<s<<endl;
    int rem,temp,coun=0;
    for(auto a:s )
    {
        if(a=='4' || a=='7')coun++;
    }
/*    int rem,temp,coun=0;
    temp=n;

    while(temp!=0)
    {
        rem=temp%10;
        cout<<rem<<" ";
        v.push_back(rem);
        if(rem==4 || rem==7)coun++;
        temp=temp/10;

    }*/
    //int len=v.size();
    //for(auto s : v)cout<<s<<" ";
    cout<<endl<<coun<<endl;
    if(coun==4 || coun==7)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

   return 0;
}

