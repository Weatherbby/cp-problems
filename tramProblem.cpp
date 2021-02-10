#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	int remainder = 0;
	int prevMax = 0;
	int currMax = 0;
	cin >> t;
	while(t--){
		int in, out;
		cin >> out >> in;
		remainder = prevMax - out;
		int allIn = in + remainder;
		if(allIn > currMax){
			currMax = allIn;
		}
		prevMax = allIn;

	}	
	cout << currMax;
}