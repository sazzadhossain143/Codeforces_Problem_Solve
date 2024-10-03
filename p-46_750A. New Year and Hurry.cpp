#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,cnt=0,p=0;
    cin>>n>>k;
    int a=240-k;
    vector<int>v;
    for(int i=1; i<=n; i++)
    {
        v.push_back(i*5);
    }
    for(int i=0; i<=v.size(); i++)
    {
        p+=v[i];
        if(p<=a && cnt<n)cnt++;
        if(p>=a ){ break;}

    }
    cout<<cnt<<endl;
}
