#include <bits/stdc++.h>
using namespace std;

double calculateAngle(pair<int, int> h1, pair<int, int> h2){
	double a, b;
	a = h2.second - h1.second; // height difference
	b = h2.first - h1.first; // distance difference
	if(b == 0 && a == 0){
		return 0;
	}
	else if(a < 0){
		return 0;
	}
	else{
		return asin(a/abs(b)) * 180 / 3.14159;
	}
}

double calculateAng(pair<int, int> h, pair<int, int> a[], int size){
	std::vector<double> left;
	std::vector<double> right;
	for(int i = 0; i < size; i++){
		pair<int, int> h2 = a[i];
		int b = h.first - h2.first;
		if(b > 0){
			left.push_back(calculateAngle(h, h2));
		}
		else if(b < 0){
			right.push_back(calculateAngle(h, h2));
		}
		else{
			continue;
		}

	}
	double maxL = *max_element(left.begin(), left.end());
	double maxR = *max_element(right.begin(), right.end());
	return 180 - maxL - maxR;
}

int main(){
	int n;
	cin >> n;
	pair<int, int> houses[n]; // distance, height
	for(int i = 0; i < n; i++){
		int a, b;
		cin >> a >> b;
		houses[i].first = a;
		houses[i].second = b;
	}
	int total = 0;
	for(int i = 0; i < n; i++){
		if(calculateAng(houses[i], houses, n) / 15 > 6){
			total++;
		}
	}	

	cout << total;
}