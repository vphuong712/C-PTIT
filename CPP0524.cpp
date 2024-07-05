#include<bits/stdc++.h>
using namespace std;

struct SinhVien {
	string id;
	string name;
	string lop;
	float diem1, diem2, diem3;
	
	SinhVien() {
		
	}
};

int z = 0;
void nhap(SinhVien& a) {
	if(z == 0) cin.ignore();
	z++;
	getline(cin, a.id);
	getline(cin, a.name);
	getline(cin, a.lop);
	cin >> a.diem1 >> a.diem2 >> a.diem3;
	cin.ignore();
}

bool cmp(SinhVien a, SinhVien b) {
	return a.id < b.id;
}

void sap_xep(SinhVien* ds, int N) {
	sort(ds, ds + N, cmp);
}

void in_ds(SinhVien ds[], int N) {
	for(int i = 0; i < N; i++) {
		cout << i + 1 << " " << ds[i].id << " " << ds[i].name << " " << ds[i].lop << " ";
		cout << fixed << setprecision(1) << ds[i].diem1 << " ";
		cout << fixed << setprecision(1) << ds[i].diem2 << " ";
		cout << fixed << setprecision(1) << ds[i].diem3 << " ";
		cout << endl;
	}
}

int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}




