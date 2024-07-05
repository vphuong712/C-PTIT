#include<bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		vector<int> v;
		for(int i = 0; i < n; i++) {
			int x;
			cin >> x;
			v.push_back(x);
		}
		
		int MAX = INT_MIN;
		int i = 0;
		int res;
		while(i < v.size()) {
			if(v[i] > MAX) {
				MAX = v[i];
				res = i;
			}
			i++;
		}
		v.insert(v.begin() + res, m);
		for(int i = 0; i < v.size(); i++) {
			if(v[i] < 0)
				cout << v[i] << " ";
		}
		for(int i = 0; i < v.size(); i++) {
			if(v[i] >= 0)
				cout << v[i] << " ";
		}
		cout << endl;
	}
}
