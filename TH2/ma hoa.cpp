#include<bits/stdc++.h>
using namespace std;

int main() {
	string n;
	getline(cin, n);
	for(int i = 0; i < n.size(); i++) {
		if(n[i] == 'a' || n[i] == 'b') {
			n[i] = n[i] + 24;
		}
		else if(n[i] >= 'c' && n[i] <= 'z'){
			n[i] = n[i] - 2;
		}
		else if(n[i] == 'Y' || n[i] == 'Z') {
			n[i] = n[i] - 24;
		}
		else if(n[i] >= 'A' && n[i] <= 'X') {
			n[i] = n[i] + 2;
		}			
	}
	cout << n << endl;
}
