#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,flag=0;
    cin>>n;
    vector<int>v;
    for(int i=1; i<=n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    vector<int>v1;

    for(int i=0,j=1; i<n-1; i++,j++)
    {
        if(v[i]<=v[j]){
            cnt++;

        }
        else {v1.push_back(cnt+1);cnt=0;}
        if(i==n-2 ){v1.push_back(cnt+1);}


    }
    sort(v1.begin(),v1.end());
    //for(auto a :v1)cout<<a<<" ";
    //cout<<endl;
    if(n==1)cout<<n<<endl;
    else cout<<v1[v1.size()-1]<<endl;

}
