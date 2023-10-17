#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,n,i;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x<=10) cout<<"YES"<<endl;

        else cout<<"NO"<<endl;
    }
    return 0;
}