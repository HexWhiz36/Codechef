#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,x,y;

    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x>>y;

        if(x<y) cout<<x<<endl;
        else cout<<y<<endl;
    }
    return 0;
}