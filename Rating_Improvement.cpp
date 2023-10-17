#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y;
    cin>>t;
    while (t--)
    {
        cin>>x>>y;
        if(x>y) cout <<"NO"<<endl;
        else if(y<=(x+200)) cout <<"YES"<<endl;
        else cout <<"NO"<<endl;
    }
    
    return 0;
}