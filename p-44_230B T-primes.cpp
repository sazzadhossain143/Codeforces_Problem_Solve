#include<bits/stdc++.h>
using namespace std;

bool prime[100000000];
long long int n=100000000;
vector<long long int>v;
void sieve()
{
    for(long long int i=4; i<=n; i+=2)prime[i]==1;
    for(long long int i=3; i*i<=n; i+=2)
    {
        if(prime[i]==0)
        {
            for(long long int j=i*i; j<=n; j+=(i*2))
            {
                prime[j]=1;
            }
        }
    }
    //prime[2]==false;
    v.push_back(2);
    for(long long int i=3; i<=n; i+=2)
    {
        if(prime[i]==0) v.push_back(i);
    }
    //cout<<endl;

}
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        long long int x;
        cin>>x;
        //int c=0;
        set<long long int>s;
        for(long long int j=2; j*j<=x; j++)
        {
            if(x%j==0){
            s.insert(j);
            long long int y=x/j;
            s.insert(y);
            if(s.size()==2)break;}

        }
        //for(auto a:s)cout<<a<<" ";
        if(s.size()==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        s.clear();
    }
}
