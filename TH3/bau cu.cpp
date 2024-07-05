#include<bits/stdc++.h>
using namespace std;


int main() {
	int n, m;
	cin >> n >> m;
	int a[n];
	map<int, int> mp;
	set<int> s, s2;
	int count = 0;
	int res = 0;
	bool check = false;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		if(a[i] > m || a[i] < 1) {
			check = true;
		}
		s.insert(a[i]);
		mp[a[i]]++;
	}
	for(auto x : mp) {
		s2.insert(x.second);
	}
	vector<int> v(s2.begin(), s2.end());
	sort(v.begin(), v.end());
	for(auto x : mp) {
		if(x.second == v[v.size() - 2]) {
			count++;
		}
	}
	if(check || count >= s.size()) {
		cout << "NONE" << endl;
	}else {
		for(auto x : mp) {
			if(x.second == v[v.size() - 2]) {
				cout << x.first << endl;
				break;
			}
		}
	}
	
}
/*
10 4
2 3 1 2 3 4 1 2 3 2
8 4
1 2 3 4 4 3 2 1
*/
