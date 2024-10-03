#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;    // h=1 , e=2, l=3, o=4
    vector<char>v;
    int h=0,e=0,l=0,o=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='h' || s[i]=='e' || s[i]=='l' || s[i]=='o' )
        {
            if(s[i]=='h' && h<1)
            {
                h=1;
                v.push_back(s[i]);
            }
            else if(h==1 && s[i]=='e'&& e<1)
            {
                e=1;
                v.push_back(s[i]);
            }
            else if(h==1 && s[i]=='l'&& e==1 && l<2)
            {
                l++;
                v.push_back(s[i]);
            }
            else if(h==1 && s[i]=='o'&& e==1 && l==2 && o<1)
            {
                o=1;
                v.push_back(s[i]);
            }

            //v.push_back(s[i]);
        }
    }
    //for(auto a:v)cout<<a;
    if(v.size()==5)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
