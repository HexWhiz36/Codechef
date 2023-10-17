#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y,z;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z;
        if(y+(z*2)>x) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}