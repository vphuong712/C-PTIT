#include<bits/stdc++.h>
using namespace std;

string chuanhoa(string str) {
	string tmp, pos;
	for(int i = 0; i < str.size(); i++) {
		str[i] = tolower(str[i]);
	}
	stringstream ss(str);
	while(ss >> tmp) {
		tmp[0] = toupper(tmp[0]);
		pos += tmp + " ";
	}
	return pos;
}


struct SinhVien{
	string id = "B20DCCN00";
	int stt;
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
		ds[i].stt = i + 1;
	}
}

bool cmp(SinhVien a, SinhVien b) {
	return a.gpa > b.gpa;
}

void sapxep(SinhVien* M, int N) {
	sort(M, M + N, cmp);
}

void in(SinhVien ds[], int N) {
	for(int i = 0; i < N; i++) {
		if(ds[i].dob[1] == '/')
			ds[i].dob.insert(0, "0");
		if(ds[i].dob[4] == '/')
			ds[i].dob.insert(3, "0");
		if(ds[i].stt > 9)
			ds[i].id = "B20DCCN0";
		cout << ds[i].id << ds[i].stt << " " << chuanhoa(ds[i].name) << ds[i].lop << " " << ds[i].dob << " ";
		cout << fixed << setprecision(2) << ds[i].gpa << endl;
	}
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}



