#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y;
    cin>>t;
    while (t--)
    {
        cin>>x>>y;
        if(y<=x) cout<<y<<endl;
        else cout<<(x+((y-x)*2))<<endl;
    }
    
    return 0;
}