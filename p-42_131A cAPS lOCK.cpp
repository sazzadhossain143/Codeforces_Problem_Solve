#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    if(s[0]>='a' && s[0]<='z')
    {
        int c=0;
        for(int i=1; i<s.size(); i++)
        {
            if(s[i]>='A' && s[i]<='Z')c=1;
            else
            {
                c=0;
                break;
            }
        }
        if(c==1)
        {
            s[0]=toupper(s[0]);
            for(int i=1; i<s.size(); i++)
            {
                s[i]=tolower(s[i]);
            }
            cout<<s<<endl;
        }
        else if(s.size()==1 ){ s[0]=toupper(s[0]);cout<<s<<endl;}
        else {
        /*  int c=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='a' && s[i]<='z'){c=1;}
            else {c=0;break;}

        }
        if(c==1){
            for(int i=0; i<s.size(); i++)
            {
                s[i]=toupper(s[i]);
            }
            cout<<s<<endl;
        }

        else*/ cout<<s<<endl;
        }

    }
    else
    {
        int c=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='A' && s[i]<='Z'){c=1;}
            else {c=0;break;}

        }
        if(c==1){
            for(int i=0; i<s.size(); i++)
            {
                s[i]=tolower(s[i]);
            }
            cout<<s<<endl;
        }

        else cout<<s<<endl;
    }



   /* else
    {
        for(int i=1; i<s.size(); i++)
        {
            s[i]=tolower(s[i]);
        }
        cout<<s<<endl;
    }*/
}
