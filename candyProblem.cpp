#include <bits/stdc++.h>
using namespace std;

int main(){
	int candies;
	cin >> candies;
	for(int i = 0; i < candies; i++){
		int n;
		cin >> n;
		int c1 = 0, c2 = 0;
		for(int j = 0; j < n; j++){
			int c;
			cin >> c;
			if(c ==1 ){
				c1++;
			}
			else{
				c2++;
			}
		}
		if((c1 + 2 * c2) % 2 != 0){
			cout << "NO\n";
		}
		else{
			int sum = (1 + 2 * c2 ) / 2;
			if(sum % 2 == 0 || (sum % 2 != 0 && c1 != 0)){
				cout << "YES\n";
			}
			else{
				cout << "NO\n";
			}
		}

	}
}