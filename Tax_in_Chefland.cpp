#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x;
    cin>>t;

    for(int i=1;i<=t;i++)
    {
        cin>>x;
        if(x<=100)
        {
            cout<<x<<endl;
        }
        else
        {
            cout<<x-10<<endl;
        }
    }
    return 0;
}