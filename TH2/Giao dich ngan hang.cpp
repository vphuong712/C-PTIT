#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string ten;
		cin.ignore();
		getline(cin, ten);
		int n;
		long long tien, chitieu = 0;
		cin >> n;
		while(n--) {
			cin >> tien;
			if(tien < 0)
				chitieu -= tien;
		}
		if(chitieu >= 100000000)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}


