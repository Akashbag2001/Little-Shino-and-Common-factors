#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
	if(a == 0)
	return b;
	return gcd(b % a, a);
}
int commDiv(int a , int b){
	int n = gcd( a,  b);
	int res = 0;
	for(int i =1; i<=sqrt(n); i++){
		if(n%i == 0){
			if(n/i == i)
			return res += 1;
			else
		    return res += 2;
			
		}
	}
	return res;
}

int main() {
	int a,b;
	cin>>a;
	cin>>b;
	cout<<commDiv(a,b);
	return 0;
}
