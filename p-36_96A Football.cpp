#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int coun=1;
    for(int i=0,j=1; j<s.size(); i++,j++)
    {

        if(s[i]==s[j])
        {
            coun++;
            if(coun==7)break;
        }
        else coun=1;
    }
    //cout<<coun;
    if(coun>=7)
        {
            cout<<"YES";

        }
    if(coun<7) cout<<"NO";
}
