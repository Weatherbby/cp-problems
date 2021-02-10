
#include <bits/stdc++.h>
using namespace std;

int main(){
	int lines;
	cin >> lines;
	for(int i = 0; i < lines; i++){
		int n, d;
		cin >> n >> d;
		vector<int> v(n);
		for(auto& it = begin(v); it != end(v); it++){
			cin >> *it;
		}
		sort(v.begin(), v.end());
		cout << (v.back() <= d || v[0] = v[1] <= d? "Yes" : "No")
	}
}
