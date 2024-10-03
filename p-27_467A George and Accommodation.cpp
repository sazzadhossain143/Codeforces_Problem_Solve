#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int coun=0;
    for(int i=1; i<=n; i++)
    {
        int a,b;
        cin>>a>>b;
        if(a+1<b)coun++;
    }
    cout<<coun<<endl;
    return 0;
}
