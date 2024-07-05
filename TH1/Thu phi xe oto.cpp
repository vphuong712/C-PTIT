#include<bits/stdc++.h>
using namespace std;

int main() {
	int arr[50], s = 0, i = 0;
	arr[2] = 20000;
	arr[5] = 10000;
	arr[7] = 15000;
	arr[29] = 50000;
	arr[45] = 70000;
	map<string, long> m;
	string b[100];
	int n;
	cin >> n;
	while(n--) {
		int t, kt = 1;
		string a;
		cin >> a;
		cin >> a;
		cin >> t;
		cin >> a;
		if(a == "OUT") {
			kt = 0;
		}
		cin >> a;
		if(kt == 1) m[a]+= arr[t];
		if(s < m.size()) {
			b[i++] = a;
			s = m.size();
		}
	}
	for(int j = 0; j < i; j++) {
		cout << b[j] << ": " << m[b[j]] << endl;
	}
}


