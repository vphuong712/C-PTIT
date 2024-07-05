#include<bits/stdc++.h>
using namespace std;

void chuanhoa(string s) {
	for(int i = 0; i < s.size(); i++) {
		s[i] = tolower(s[i]);
	}
	stringstream ss(s);
	string tmp, res;
	while(ss >> tmp) {
		tmp[0] = toupper(tmp[0]);
		res += tmp + " ";
	}
	cout << res;
}

int main() {
	int t;
	cin >> t;
	cin.ignore();
	string ma = "TS0";
	int number = 1;
	if(number > 9) {
		ma = "TS";
	}
	while(t--) {
		string name;
		int age;
		double diem;
		string dan_toc;
		int kv;
		double diem_cong;
		double diem_uu_tien = 1.5;
		getline(cin, name);
		cin >> diem;
		cin >> dan_toc;
		cin >> kv;
		if(kv == 1) diem_cong = 1.5;
		if(kv == 2) diem_cong = 1;
		if(kv == 3) diem_cong = 1.5;
		if(dan_toc == "Kinh" || dan_toc == "kinh" ) diem_uu_tien = 0;
		diem = diem + diem_cong + diem_uu_tien;
		string tt;
		if(diem >= 20.5) {
			tt = "Do";
		} else {
			tt = "Truot";
		}
		cout << ma << number << " ";
		chuanhoa(name);
		cout << diem << " ";
		cout << tt << endl;
		number++;
		cin.ignore();
	}
}

/*
2
Nguyen  hong ngat
22
Kinh
1
  Chu thi MINh
14
Dao
3
*/
