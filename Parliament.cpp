#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        if(x>=((float)n/2)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}