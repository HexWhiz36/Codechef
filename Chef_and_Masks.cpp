#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y;
    cin>>t;
    while (t--)
    {
        cin>>x>>y;
        if((x*100)<(y*10)) 
        {
            cout<<"Disposable"<<endl;
        }
        else if((x*100)==(y*10)) 
        {
            cout<<"Cloth"<<endl;
        }
        else 
        {
            cout<<"Cloth"<<endl;
        }
    }
    
    return 0;
}