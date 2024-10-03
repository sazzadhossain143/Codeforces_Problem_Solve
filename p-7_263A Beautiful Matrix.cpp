#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5][5],i,j,c,d;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                if(i+1<=3) c=3-(i+1);
                else  c=(i+1)-3;
                if(j+1<=3) d=3-(j+1);
                else  d=(j+1)-3;
            }
        }
    }
    cout<<c+d<<endl;
    return 0;
}
