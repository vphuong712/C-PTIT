#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
	string id = "B20DCCN00";
	string name;
	string lop;
	string dob;
	float gpa;
};

void input(SinhVien& a) {
	getline(cin, a.name);
	getline(cin, a.lop);
	getline(cin, a.dob);
	cin >> a.gpa;
	cin.ignore();
}

void nhap(SinhVien ds[], int N) {
	cin.ignore();
	for(int i = 0; i < N; i++) {
		input(ds[i]);
	}
}

string chuanhoa(string a) {
	string tmp, pos;
	for(int i = 0; i < a.size(); i++) {
		a[i] = tolower(a[i]);
	}
	stringstream ss(a);
	while(ss >> tmp) {
		tmp[0] = toupper(tmp[0]);
		pos += tmp + " ";
	}
	return pos;
}

void in(SinhVien ds[], int N) {
	for(int i = 0; i < N; i++) {
		if(ds[i].dob[1] == '/')
			ds[i].dob.insert(0, "0");
		if(ds[i].dob[4] == '/')
			ds[i].dob.insert(3, "0");
		if(i + 1 > 9)
			ds[i].id = "B20DCCN0";
		cout << ds[i].id << i + 1 << " " << chuanhoa(ds[i].name) << ds[i].lop << " " << ds[i].dob << " ";
		cout << fixed << setprecision(2) << ds[i].gpa << endl;
	}
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
