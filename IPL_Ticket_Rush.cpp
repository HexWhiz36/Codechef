#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,n;
    cin>>t;

    for(int i=1;i<=t;i++)
    {
        cin>>x>>n;
        if((x==n) || (x<n))
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<x-n<<endl;
        }
    }
    return 0;
}