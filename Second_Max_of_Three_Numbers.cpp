#include<bits/stdc++.h>
#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
    long long int x,y,z;
	cin >> t;
	while(t--){
		
		cin >> x >> y >> z;
		if(x>=y && y>=z || x<=y && y<=z)
			cout << y << endl;
		else if(x>=z && z>=y || x<=z && y>=z)
			cout << z << endl;
		else
			cout << x << endl;
	}
    return 0;
}