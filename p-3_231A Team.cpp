#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,ar[4],i,j,coun,slv=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        coun=0;
        for(j=0; j<3; j++)
        {
            cin>>ar[j];
            //if(ar[i]==1 || ar[i]==0)
            //{
                if(ar[j]==1)coun++;
           // }
        }
        if(coun>=2)slv++;
    }
    cout<<slv<<endl;

    return 0;
}
