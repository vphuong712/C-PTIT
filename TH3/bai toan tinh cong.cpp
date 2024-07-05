#include<bits/stdc++.h>
using namespace std;

struct nv{
	string ma;
	string ten;
	int luong;
	int so_cong;
	string cv;
};

int main() {
	struct nv a;
	a.ma = "NV01";
	getline(cin, a.ten);
	cin >> a.luong >> a.so_cong;
	cin.ignore();
	cin >> a.cv;
	a.luong *= a.so_cong;
	long thuong, pc, tn, k;
	if(a.so_cong >= 25) {
		k = 20;
	}
	if(a.so_cong < 22) {
		k = 0;
	}
	if(a.so_cong >= 22 && a.so_cong < 25) {
		k = 10;
	}
	thuong = k * a.luong;
	thuong /= 100;
	if(a.cv == "GD")
		pc = 250000;
	if(a.cv == "PGD")
		pc = 200000;
	if(a.cv == "TP")
		pc = 180000;
	if(a.cv == "NV")
		pc = 150000;
	
	cout << a.ma << " " << a.ten << " " << a.luong << " " << thuong << " " << pc << " " << a.luong + thuong + pc << endl;
	
}
