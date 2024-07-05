#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string s1, s2;
		getline(cin, s1);
		getline(cin, s2);
		set<string> set1;
		set<string> set2;
		stringstream ss(s1);
		stringstream sss(s2);
		string tmp, pos;
		while(ss >> tmp) {
			set1.insert(tmp);
		}
		while(sss >> pos) {
			set2.insert(pos);
		}
		for(auto x : set1) {
			if(set2.find(x) == set2.end()) {
				cout << x << " ";
			}
		}
		cout << endl;
	}
}
/*
2
abc ab ab ab abcd
ab abc
aaa xyz ab zzz abc dd dd abc
xyz dd ttt sas cdc
*/
