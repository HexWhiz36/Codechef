#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y,a,b;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>a>>b;
        if((x+y)<(a+b)) cout<<x+y<<endl;
        else cout<<a+b<<endl;
    }
    return 0;
}