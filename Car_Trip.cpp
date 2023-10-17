#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x;
    cin>>t;
    while(t--)
    {
        cin>>x;
        if(x<=300) cout<<3000<<endl;
        else cout<<(((x-300)*10)+3000)<<endl;
    }
    return 0;
}