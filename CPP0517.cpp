#include<bits/stdc++.h>
using namespace std;

struct NhanVien{
	string id = "0000";
	string name;
	string sex;
	string dob;
	string address;
	string mst;
	string date;
};

void nhap(NhanVien& a) {
	getline(cin, a.name);
	getline(cin, a.sex);
	getline(cin, a.dob);
	getline(cin, a.address);
	getline(cin, a.mst);
	getline(cin, a.date);
}

void inds(NhanVien ds[], int N) {
	for(int i = 0; i < N; i++) {;
		if(i + 1 > 9) {
			ds[i].id = "000";
		}
		cout << ds[i].id << i + 1 << " " << ds[i].name << " " << ds[i].sex << " " << ds[i].dob << " " << ds[i].address << " " << ds[i].mst << " " << ds[i].date << endl;
	}
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
