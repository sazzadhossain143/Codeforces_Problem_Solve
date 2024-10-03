#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    cin>>n;
    double sum=0;
    for( int i=1; i<=n; i++)
    {
        int a;
        cin>>a;
        sum=sum+a;

    }
    cout<<showpoint<<fixed<<setprecision(12)<<sum/n<<endl;
    return 0;
}
