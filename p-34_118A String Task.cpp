#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<char>v;
    for(int i=0; i<s.size(); i++)
    {

        if(s[i]=='A' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='E' || s[i]=='Y' ||
           s[i]=='a' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='e' || s[i]=='y' );
        else
        {

            v.push_back(tolower(s[i]));
        }

    }
    for(auto a:v)cout<<"."<<a;

    return 0;
}
