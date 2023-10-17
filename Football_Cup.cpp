#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, x,y;
    cin>>t;
    while (t--)
    {
        cin>>x>>y;
        if(x>=1 && y>=1)
        {
            if(x==y)
            {
            cout<<"YES"<<endl;
            }
            else 
            {
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}