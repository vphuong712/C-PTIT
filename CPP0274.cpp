#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		map<int, int> m;
		for(int i = 0; i < n; i++){
			int e;
			cin >> e;
			m[e]++;
		}
		int count = 0;
		for(auto e : m) {
			if(e.second > 1)
				count += e.second;
		}
		cout << count << endl;
		for(auto x : m) {
			cout << x.first << " :" << x.second << endl;
		}
	}
}
