#include<bits/stdc++.h>
using namespace std;

struct MatHang{
	int stt;
	string name;
	string nhom;
	double giamua;
	double giaban;
	double loinhuan;
};

void input(MatHang& a) {
	getline(cin, a.name);
	getline(cin, a.nhom);
	cin >> a.giamua;
	cin >> a.giaban;
	a.loinhuan = a.giaban - a.giamua;
	cin.ignore();
}

void nhap(MatHang ds[], int N) {
	cin.ignore();
	for(int i = 0; i < N; i++) {
		input(ds[i]);
		ds[i].stt = i + 1;
	}
}

bool cmp(MatHang a, MatHang b) {
	return a.loinhuan > b.loinhuan;
}

void sapxep(MatHang* M, int N) {
	sort(M, M + N, cmp);
}

void in(MatHang ds[], int N) {
	for(int i = 0; i < N; i++) {
		cout << ds[i].stt << " " << ds[i].name << " " << ds[i].nhom << " " << fixed << setprecision(2) << ds[i].loinhuan << endl;
	}
}

int main() {
	MatHang ds[50];
	int N;
	cin >> N;
	nhap(ds, N);
	sapxep(ds, N);
	in(ds, N);
}
