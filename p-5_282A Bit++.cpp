#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        string s;
        cin>>s;
        if(s=="X++")
        {
            x++;
        }
        else if(s=="++X")
        {
            ++x;
        }
        else if(s=="--X")
        {
            --x;
        }
        else if(s=="X--")
        {
            x--;
        }

    }
    cout<<x<<endl;
    return 0;
}
