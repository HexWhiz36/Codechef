#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x>>y;

        if((x+y)>6)
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}