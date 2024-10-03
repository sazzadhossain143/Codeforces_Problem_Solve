#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            i=i+2;
            if(c==1){cout<<" ";c=0;}

        }
        else
        {
            cout<<s[i];
            c=1;
        }
    }

}
