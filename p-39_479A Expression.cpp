#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,e[5];
    cin>>a>>b>>c;
    e[0]=a+b*c;
    e[1]=a*(b+c);
    e[2]=a*b*c;
    e[3]=(a+b)*c;
    e[4]=a+b+c;

    int mx=e[0];
    for(int i=1; i<5; i++)
    {
        if(e[i]>mx)mx=e[i];
    }
    cout<<mx<<endl;
}
