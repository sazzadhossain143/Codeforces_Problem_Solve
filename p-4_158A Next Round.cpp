#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,a[100],i,coun=0;
    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        if(a[i]>0)
        {
            if(a[i]>=a[k-1])coun++;
        }

    }
    cout<<coun<<endl;
return 0;
}
