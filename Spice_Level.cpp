#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x;
    cin>>t;
    while(t--)
    {
        cin>>x;
        if(x<4) cout <<"MILD"<<endl;
        else if (x>=4 && x<7) cout<<"MEDIUM"<<endl;
        else cout<<"HOT"<<endl;
    }
    return 0;
}

