#include <bits/stdc++.h>
using namespace std;

int main(){
	string outp = "";
	for(int t = 0; t < 5; t++){
		int size1;
		cin >> size1;
		int a1[size1];
		for(int i = 0; i < size1; i++){
			cin >> a1[i];
		}

		int size2;
		cin >> size2;
		int a2[size2];
		for(int i = 0; i < size2; i++){
			cin >> a2[i];
		}

		string common1 = "";
		string common2 = "";

		for(int i = 0; i < size1; i++){
			for(int j = 0; j < size2; j++){
				if(a1[i] == a2[j]){
					common1 += to_string(a1[i]);
				}
			}
		}

		for(int i = 0; i < size2; i++){
			for(int j = 0; j < size1; j++){
				if(a2[i] == a1[j]){
					common2 += to_string(a2[i]);
				}
			}
		}

		if(common1 == common2){
			outp += "1";
		}
		else{
			outp += "0";
		}
	}

	cout << outp;	
}