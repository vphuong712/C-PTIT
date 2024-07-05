#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
	string id = "B20DCCN001";
	string name;
	string lop;
	string dob;
	float gpa;
};

void nhap(SinhVien& A) {
	getline(cin, A.name);
	cin >> A.lop;
	cin >> A.dob;
	cin >> A.gpa;
}

void in(SinhVien A) {
	if(A.dob[1] == '/') {
		A.dob.insert(0, "0");
	}
	if(A.dob[4] == '/') {
		A.dob.insert(3, "0");
	}
	cout << A.id << " " << A.name << " " << A.lop << " " << A.dob << " ";
	cout << fixed << setprecision(2) << A.gpa;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
