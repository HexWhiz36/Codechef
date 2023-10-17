#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y;
    cin>>t;

    for(int i=1;i<=t;i++)
    {
        cin>>x>>y;
        if(x==y) cout<<x<<endl;
        else if(x>y) cout<<x<<endl;
        else cout<<y<<endl;
    }
    return 0;
}