#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    char a[50];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int coun=0;
    for(i=0,j=i+1; i<n; i++,j++)
    {
        if(a[i]==a[j])coun++;
    }
    cout<<coun<<endl;

    return 0;

}
