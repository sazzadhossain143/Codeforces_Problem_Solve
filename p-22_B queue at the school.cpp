#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin>>n>>t;
    string s;
    cin>>s;
    for(int j=1; j<=t; j++)
    {
        for(int i=0; i<n-1; i++)
        {
            if(s[i]=='B' && s[i+1]=='G' )
            {
                char temp=s[i];
                s[i]=s[i+1];
                s[i+1]=temp;
                i++;
            }
        }
    }

    cout<<s<<endl;
    return 0;
}
