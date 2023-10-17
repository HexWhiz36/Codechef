#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y;
    cin>>t;

    for(int i=1;i<=t;i++)
    {
        cin>>x>>y;
        if(x!=y)
        {
        if(x>y)  cout<<"A"<<endl;
        
        else cout<<"B"<<endl;
        }
       
    }
    return 0;
}