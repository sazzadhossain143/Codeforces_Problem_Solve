#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int coun=0;
    for(int i=1; i<=n; i++)
    {
        int a;
        cin>>a;
        if(a==1)coun++;
    }

    if(coun==0)cout<<"EASY"<<endl;
    else cout<<"HARD"<<endl;
    return 0;
}
