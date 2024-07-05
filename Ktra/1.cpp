#include<bits/stdc++.h>
using namespace std;

float A[100];

void arr() {
	A[0] = 4.5;
	A[1] = 5.0;
	A[2] = 5.5;
	A[3] = 6.0;
	A[4] = 6.5;
	A[5] = 7.0;
	A[6] = 7.5;
	A[7] = 8.0;
	A[8] = 8.5;
	A[9] = 9.0;
}

int main() {
	arr();
	int t;
	cin >> t;
	while(t--) {
		float d;
		int c3 = -1;
		cin >> d;
		for(int i = 0; i < 10; i++) {
			if(A[i] == d) {
				if(A[i] == 4.5) {
					c3 = 7;
				} else if(A[i] == 5.0) {
					c3 = 8;
				} else if(A[i] == 5.5) {
					c3 = 9;
				} else {
					c3 = 10;
				}
			}
		}
		cout << c3 << endl;	
	}
}
