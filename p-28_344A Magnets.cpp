#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m[n];
    for(int i=0; i<n; i++)
    {
        cin>>m[i];
    }
    int coun=1;
    for(int i=0,j=i+1; j<n; i++,j++)
    {
        if(m[i]!=m[j])coun++;
    }
    cout<<coun<<endl;
    return 0;
}
