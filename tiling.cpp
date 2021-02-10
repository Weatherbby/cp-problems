#include <bits/stdc++.h>
using namespace std;

int getWaysI(int n){
	if(n <= 0){
		return 0;
	}
	else if(n == 1){
		return 1;
	}
	else if(n == 2){ 
		return 2; 
	}
	return getWaysI(n - 1) % 1000000007 + getWaysI(n-2) % 1000000007;
}

int getWaysL(int n){
	if(n % 3 == 0){
		return 2;
	}

	return 0;
}

int main(){
	int t;
	int n; 
	cin >> t;
	cin >> n;
	if (t == 1){
		cout << getWaysI(n);
	}
	else{
		cout << getWaysL(n);
	}

}