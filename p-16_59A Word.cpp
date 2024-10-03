#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    cin>>s;
    int len=strlen(s);

    int coun1=0,coun2=0;
    for(int i=0; i<len; i++)
    {
        if(s[i]>='a' && s[i]<='z')coun1++;
        else coun2++;
    }
    if(coun1>=coun2)cout<<strlwr(s)<<endl;
    else cout<<strupr(s)<<endl;

   return 0;
}

