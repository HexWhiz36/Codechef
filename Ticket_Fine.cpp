#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y,z;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z;
        if(y<=z) cout<<0<<endl;
        else cout<<(y-z)*x<<endl;
    }
    return 0;
}