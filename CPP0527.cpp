#include<bits/stdc++.h>
using namespace std;

struct Time {
	int h, m, s;
	Time() {
		
	}
};

void nhap(Time& a) {
	cin >> a.h >> a.m >> a.s;
}

bool cmp(Time a, Time b) {
	if(a.h < b.h)
		return true;
	if(a.h == b.h && a.m < b.m)
		return true;
	if(a.h == b.h && a.m == b.m && a.s < b.s)
		return true;
	return false;
}

int main() {
	int N;
	cin >> N;
	struct Time ds[N];
	for(int i = 0; i < N; i++) {
		nhap(ds[i]);
	}
	sort(ds, ds + N, cmp);
	for(int i = 0; i < N; i++) {
		cout << ds[i].h << " " << ds[i].m << " " << ds[i].s << endl;
	}
}
