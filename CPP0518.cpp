#include<bits/stdc++.h>
using namespace std;

struct NhanVien {
	string id = "0000";
	int stt;
	string name;
	string gender;
	string dob;
	string address;
	string mst;
	string date;
	int dd, mm, yy;
};

void chuanhoa(string str) {
	if(str[1] == '/')
		str.insert(0, "0");
	if(str[4] == '/')
		str.insert(3, "0");
}

int z = 0;
void nhap(NhanVien& a) {
	if(z == 0) getchar();
	z++;
	getline(cin, a.name);
	getline(cin, a.gender);
	getline(cin, a.dob);
	getline(cin, a.address);
	getline(cin, a.mst);
	getline(cin, a.date);
	chuanhoa(a.dob);
	chuanhoa(a.date);
	a.dd = (a.dob[0] - '0') * 10 + (a.dob[1] - '0');
	a.mm = (a.dob[3] - '0') * 10 + (a.dob[4] - '0');
	a.yy = (a.dob[6] - '0') * 1000 + (a.dob[7] - '0') * 100 + (a.dob[8] - '0') * 10 + (a.dob[9] - '0');
}


bool cmp(NhanVien a, NhanVien b) {
	if(a.yy < b.yy)
		return true;
	if(a.yy == b.yy && a.mm < b.mm)
		return true;
	if(a.yy == b.yy && a.mm == b.mm && a.dd < b.dd)
		return true;
	return false;
}

void sapxep(NhanVien* ds, int N) {
	for (int i = 0; i < N; i++) ds[i].stt = i;
	sort(ds, ds + N, cmp);
}

void inds(NhanVien ds[], int N) {
	for(int i = 0; i < N; i++) {
		if(ds[i].stt > 9)
			ds[i].id = "000";
		cout << ds[i].id << ds[i].stt + 1 << " " << ds[i].name << " " << ds[i].gender << " " << ds[i].dob << " " << ds[i].address << " " << ds[i].mst << " " << ds[i].date << endl;
	}
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}


