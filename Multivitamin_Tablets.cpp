#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if((x*3)<=y) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}