#include<bits/stdc++.h>
using namespace std;

struct NhanVien {
	string name;
	string dob;
	int dd, mm, yy;
};
 
void chuanhoa(string str) {
	if(str[1] == '/') {
		str.insert(0, "0");
	}
	if(str[4] == '/') {
		str.insert(3, "0");
	}
}

void input(NhanVien& a) {
	cin >> a.name >> a.dob;
	chuanhoa(a.dob);
	a.dd = (a.dob[0] - '0') * 10 + (a.dob[1] - '0');
	a.mm = (a.dob[3] - '0') * 10 + (a.dob[4] - '0');
	a.yy = (a.dob[6] - '0') * 1000 + (a.dob[7] - '0') * 100 + (a.dob[8] - '0') * 10 + (a.dob[9] - '0');
}

void nhap(NhanVien ds[], int N) {
	for(int i = 0; i < N; i++) {
		input(ds[i]);
	}
}

bool cmp(NhanVien a, NhanVien b) {
	if(a.yy > b.yy)
		return true;
	if(a.yy == b.yy && a.mm > b.mm)
		return true;
	if(a.yy == b.yy && a.mm == b.mm && a.dd > b.dd)
		return true;
	return false;
}

void sap_xep(NhanVien* ds, int N) {
	sort(ds, ds + N, cmp);
}

void in(NhanVien ds[], int N) {
	cout << ds[0].name << endl << ds[N-1].name << endl;
}

int main() {
	int N;
	cin >> N;
	cin.ignore();
	struct NhanVien ds[N];
	nhap(ds, N);
	sap_xep(ds, N);
	in(ds, N);
}
