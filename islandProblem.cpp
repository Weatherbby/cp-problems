#include <bits/stdc++.h>
using namespace std;


struct Island
{
	int borders[4];
	bool land;
	int subsections;
	int outers;

};

bool isInside(Island i1, Island i2){
	if(i1.borders[0] > i2.borders[0] && i1.borders[1] > i2.borders[1]){
		return true;
	}
	return false;
}


int main(){
	int n;
	cin >> n;
	int isl = n;
	Island arr[n];
	int final = 0;
	while(n--){
		for(int i = 0; i < 4; i++){
			cin >> arr[n].borders[i];
		}
	}

	for(int i = 1; i < isl; i++){
		for(int j = 1; j < isl; j++){
			if(isInside(arr[j], arr[i])){
				arr[i].subsections++;
			}
		}
	}

	for(int i = 1; i < isl; i++){
		if(arr[i].subsections == 0){
			for(int j = 1; j < isl; i++){
				if(isInside(arr[i], arr[j])){
					arr[i].outers++;
				}
			}
			if(arr[i].outers == 0 || arr[i].outers == 1){
				final++;
			}
			else if(arr[i].outers == 2){
				final += 2;
			}
			else{
				final += 2 + (arr[i].outers / 4);
			}
			
		}
	}

	cout << final;

}