#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string line;
		cin >> line;
		int score = 0;
		int count = 0;
		for(int i = 0; i < line.length() - 1 && score >= 0; i++){
			if(line[i] == '('){
				++score;
			}
			else if(line[i] == ')'){
				--score;
			}
			else{
				++count;
			}

		}

		if(score == 0 && count % 2 == 0){
			cout << "YES\n";
		}
		else{
			cout << "NO\n";
		}
	}	
}