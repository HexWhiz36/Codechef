#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x==0 && y==0) cout<<7<<endl;
        else if(x>y) cout<<7-x<<endl;
        else cout<<7-y<<endl;
    }
    return 0;
}