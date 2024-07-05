#include<bits/stdc++.h>
using namespace std;

struct SinhVien {
	int stt;
	string id;
	string name;
	string lop;
	string email;
	string dn;
	
	SinhVien() {
		
	}
};

void input(SinhVien& a) {
	getline(cin, a.id);
	getline(cin, a.name);
	getline(cin, a.lop);
	getline(cin, a.email);
	getline(cin, a.dn);
}

bool cmp(SinhVien a, SinhVien b) {
	return a.id < b.id;
}

void sap_xep(SinhVien* ds, int N) {
	for(int i = 0; i < N; i++) 
		ds[i].stt = i + 1;
	sort(ds, ds + N, cmp);
}


int main() {
	int N;
	cin >> N;
	cin.ignore();
	struct SinhVien ds[N];
	for(int i = 0; i < N; i++) {
		input(ds[i]);
	}
	sap_xep(ds, N);
	int Q;
	cin >> Q;
	while(Q--) {
		string s;
		cin >> s;
		for(int i = 0; i < N; i++) {
			if(ds[i].dn == s) {
				cout << ds[i].stt << " " << ds[i].id << " " << ds[i].name << " " << ds[i].lop << " " << ds[i].email << " " << ds[i].dn << endl;
			}
		}
	}
}

