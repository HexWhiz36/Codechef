#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y;

    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if((x*2)==(y*5)) cout << "Either"<<endl;
        else if((x*2)>(y*5)) cout<<"Chocolate"<<endl;
        else cout<< "Candy" << endl;
    }
    return 0;
}