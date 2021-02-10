#include <bits/stdc++.h>
using namespace std;

int main(){
	int count[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
	int cols = 0;
	int h = 0;
	int n;
	cin >> n;
	int arr[n];
	for(int &i:arr) cin >> i;
	for(int i = 0; i < n; i++){
		count[arr[i] - 1] += 1;
	}
	for(int i = 0; i < 9; i++){
		if(count[i] != 0) cols++;
		if(count[i] > h){
			h = count[i];
		}
	}
	printf("%d %d\n", h, cols);

}