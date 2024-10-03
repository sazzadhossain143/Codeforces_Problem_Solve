#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    cin>>s;

    int len = strlen(s);

    int tem;
    for(int i=0; i<len; i++)
    {
        for(int j=i+1; j<len; j++)
        {
            if(s[i]>'0' && s[i]<='9' && s[j]>'0' && s[j]<='9')
            {
                if(s[i]>s[j])
                {
                    tem=s[i];
                    s[i]=s[j];
                    s[j]=tem;
                }
            }
        }

    }

    cout<<s<<endl;

    return 0;

}
