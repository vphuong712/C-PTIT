#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		int k;
		cin >> k;
		int a[1000];
		for(int i = 'a'; i <= 'z'; i++) {
			a[i] = 0;
		}
		for(int i = 0; i < s.size(); i++) {
			a[s[i]]++;
		}
		int count = 0;
		for(int i = 'a'; i <= 'z'; i++) {
			if(a[i] > 0)
				count++;
		}
		if(26 - count <= k && s.size() >= 26) {
			cout << 1 << endl;
		} else {
			cout << 0 << endl;
		}
	}
}
