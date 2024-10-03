#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    long long int n,t;

    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==1)cout<<"YES"<<endl;
        else
        {
            if((n&(n-1))==0)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }




    return 0;

}
//    while(t--)
//    {
//        cin>>n;
//        if((n&(n-1))==0)cout<<"NO"<<endl;    // 4 = 1 0 0  //n&(n-1))=0 ==2^n
//        else cout<<"YES"<<endl;              // 3 = 0 1 1
//    }*/                                     /// & = 0 0 0

///solve 2
//        if(n%2==1)cout<<"YES"<<endl;
//        else
//        {
//            while(n%2==0)n/=2;
//            if(n==1)cout<<"NO"<<endl;
//            else cout<<"YES"<<endl;
//        }
