#include<bits/stdc++.h>
using namespace std;

struct ThiSinh {
	string name;
	string dob;
	double p1;
	double p2;
	double p3;
};

void nhap(ThiSinh &a) {
	getline(cin, a.name);
	cin >> a.dob;
	cin >> a.p1;
	cin >> a.p2;
	cin >> a.p3;
}

void in(ThiSinh &a) {
	cout << a.name << " " << a.dob << " ";
	cout << fixed << setprecision(1) << a.p1 + a.p2 + a.p3;
}

int main() {
	struct ThiSinh A;
	nhap(A);
	in(A);
}
