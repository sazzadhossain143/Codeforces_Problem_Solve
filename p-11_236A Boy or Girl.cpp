#include<bits/stdc++.h>
using namespace std;
int main()
{
/*    char s[100];
    cin>>s;

    int len = strlen(s);
    int coun=0;
    for(int i=0; i<len; i++)
    {
        for(int j=i+1; j<len; j++)
        {
            if(s[i]==s[j])coun++;
        }
    }
    cout<<len<<endl;
    cout<<coun<<endl;
    cout<<len-coun<<endl;
    int hero=len-coun;
*/
    set<char>s;

    char c[100];
    cin>>c;

    int len = strlen(c);
    for(int i=0; i<len; i++)
    {
        s.insert(c[i]);
    }

    //cout<<s.size()<<endl;
    int hero=s.size();
    if(hero%2==0)cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;

    return 0;


}
