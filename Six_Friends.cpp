#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if((x*3)>=(y*2)) cout<<(y*2)<<endl;
        else cout<<(x*3)<<endl;
    }
    return 0;
}