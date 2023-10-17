#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,i;
    cin>>n;
    
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x%2==0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}