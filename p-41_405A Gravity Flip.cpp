#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>s;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        s.push_back(a);
    }
    s.sort();
    for(auto a:s)cout<<a<<" ";
}
