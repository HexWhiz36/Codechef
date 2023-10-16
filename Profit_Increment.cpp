#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y;
    cin>>t;
    while (t--)
    {
        cin>>x>>y;
        cout<<((x+(x*0.1))-(x-y))<<endl;
    }
    
    return 0;
}