#include<bits/stdc++.h>
using namespace std;

bool check(int n) {
	int c = 0;
	int l = 0;
	while(n > 0) {
		int m = n % 10;
		n = n / 10;
		if(m % 2 == 0) {
			c++;
		}else {
			l++;
		}
	}
	return c == l;
}

int main() {
	int n;
	int count = 0;
	cin >> n;
	for(int i = pow(10, n - 1); i < pow(10, n); i++){
		if(check(i)) {
			cout << i << " ";
			count++;
			if(count == 10)
				cout << endl;
			count %= 10;
		}
	}
}
