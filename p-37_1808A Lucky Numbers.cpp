#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int a,b;
        cin>>a>>b;
        int mx=0,c=0;
        for(int j=a; j<=b; j++)
        {
            string s=to_string(j);
            int sub=0;
            if(s.size()==1 || a==b ){sub=b;c=b;}
            else{sort(s.begin(),s.end());
            sub=(s[s.size()-1]-'0')-(s[0]-'0');
            if(sub>=mx)
            {
                mx=sub;
                c=j;
                if(mx==9)break;
            }}
            s.clear();
        }
        cout<<c<<endl;
    }
    return 0;
}
