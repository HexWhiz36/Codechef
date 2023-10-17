#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x;
    cin>>t;

    for(int i=1;i<=t;i++)
    {
        cin>>x;
        if(x>=67 && x<=45000)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}