#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y;
    cin>>y;

    int i=y+1;
    while(1)
    {
        int temp=i;
        vector<int>v;
        for(int l=0; l<4; l++)
        {

            int rem=temp%10;
            v.push_back(rem);
            temp=temp/10;
        }

        int j,k,coun=0;
        for( j=0; j<4; j++)
        {
            for( k=j+1; k<4; k++)
            {
                if(v[j]==v[k])coun++;
            }
        }
        //cout<<coun<<endl;
        if(coun==0)
        {cout<<i<<endl;break;}
        v.clear();i++;
    }

    return 0;

}
 /*   int temp=y;
        vector<int>v;
        for(int l=0; l<4; l++)
        {

            int rem=temp%10;
            v.push_back(rem);
            temp=temp/10;
        }
        for(auto a:v)cout<<a<<endl;
        int j,k,coun=0;
        for( j=0; j<4; j++)
        {
            for( k=j+1; k<4; k++)
            {
                if(v[j]==v[k])coun=1;//2013
            }
        }
        cout<<coun<<endl;
        */
