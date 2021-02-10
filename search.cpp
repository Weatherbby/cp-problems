#include <bits/stdc++.h>
using namespace std;

int main(){
	string n;
	cin >> n;
	int i;
	int c;
	size_t found;
	for(i = n.size(); i > 0; i--){
		string sub = n.substr(0, i);
		found = n.find(sub, i);
		if(found != string::npos){
			c = found + 1;
			break;
		}
		else{
			c = 1;
		}
	}
	printf("%d %d\n", i, c);
}
