#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
   /* if(s[0]=='H' || s[0]=='Q' || s[0]=='9'|| s[i]=='+'  )
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;*/

    int coun=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9'  )
        {
           coun=1; break;
        }
    }
    if(coun==1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
