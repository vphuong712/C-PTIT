#include<bits/stdc++.h>
using namespace std;

string chuan_hoa1(string s) {
	for(int i = 0; i < s.size(); i++) {
		s[i] = tolower(s[i]);
	}
	stringstream ss(s);
	string tmp, res;
	while(ss >> tmp) {
		tmp[0] = toupper(tmp[0]);
		res += tmp + " ";
	}
	auto it = res.find(tmp);
	res.replace(res.begin() + it, res.end(), "");
	return tmp +  " " + res;
}

string chuan_hoa2(string s) {
	for(int i = 0; i < s.size(); i++) {
		s[i] = tolower(s[i]);
	}
	stringstream ss(s);
	string tmp, res, pos;
	int count = 0;
	while(ss >> tmp) {
		tmp[0] = toupper(tmp[0]);
		count++;
		if(count == 1) {
			pos = tmp;
			tmp = "";
			continue;
		}
		res += tmp + " ";
	}
	return res + pos;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		cin.ignore();
		string s;
		getline(cin, s);
		if(n == 1) {
			cout << chuan_hoa1(s) << endl;
		} else if(n == 2) {
			cout << chuan_hoa2(s) << endl;
		}
	}
}
