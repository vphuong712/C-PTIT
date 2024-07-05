#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n][3];
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < 3; j++) {
			cin >> a[i][j];
		}
	}
	int c = 0;
	for(int i = 0; i < n; i++) {
		int c0 = 0, c1 = 0;
		for(int j = 0; j < 3; j++) {
			if(a[i][j] == 1)
				c1++;
			else 
				c0++;
			}
			if(c1 > c0)
				c++;
		}
	cout << c << endl;
}
