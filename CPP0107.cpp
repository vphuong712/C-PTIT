#include<bits/stdc++.h>
using namespace std;

void checkPoint() {
	string str1 = "ABBADCCABDCCABD";
	string str2 = "ACCABCDDBBCDDBB";
	int n;
	cin >> n;
	double result = 0;
	if(n == 101) {
		for(int i = 0; i < 15; i++){
		char c;
		cin >> c;
		if(c == str1[i])
			result += 2.0 / 3;
		}
	}
	else if(n == 102) {
		for(int i = 0; i < 15; i++){
		char c;
		cin >> c;
		if(c == str2[i])
			result += 2.0 / 3;
		}
	}
	cout << setprecision(2) << fixed << result << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		checkPoint();
	}
}
