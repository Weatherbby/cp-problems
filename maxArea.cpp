#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	for(int tr = 0; tr < t; tr++){
		int arr[4];
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		arr[0] = a;
		arr[1] = b;
		arr[2] = c;
		arr[3] = d;

		sort(arr, arr + 4);
		int minW = min(arr[0], arr[1]);
		int minH = min(arr[2], arr[3]);
		cout << minW * minH << endl;
	}
}