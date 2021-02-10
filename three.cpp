#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; 
	cin >> n;

	int connected[n][n] = {0};
	int count[n] = {0};
	
	for(int t = 0; t < n - 1; t++){
		int a, b; 
		cin >> a >> b;
		connected[a-1][b-1] = 1;
		connected[b-1][a-1] = 1;
		count[a-1]++;
		count[b-1]++;
	}
	std::vector<int> possible;
	for(int i = 0; i < n; i++){
		if(n - count[i] >= 3){
			possible.push_back(i+1);
		}
	}
	int result = 0;
	for(int i = 0; i < possible.size() - 2; i++){
		for(int j = i + 1; j < possible.size() - 1; j++){
			for(int k = j + 1; k < possible.size(); k++){
				if(connected[possible.at(i) - 1][possible.at(j) - 1] != 1 && connected[possible.at(i) - 1][possible.at(k) - 1] != 1 && connected[possible.at(k) - 1][possible.at(j) - 1] != 1){ // bruteforce за определяне дали 3те града са свързани
					result++;
				}
			}
		}
	}
	

	cout << result << endl;
}