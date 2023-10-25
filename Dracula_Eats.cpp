#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,c=0,d=2;
    cin>>t;
    while (t--)
    {
        cin>>n;
        if(d <= n){
          while(d <= n){
              d = d + 7;
              c++;
          }
          cout << c << endl;
      }
      else{
          cout << c << endl;
      }
    }
    
    return 0;
}