#include<bits/stdc++.h>
using namespace std;

struct Data {
	int m, pos;
};

bool cmp(Data a, Data b) {
	if(a.m == b.m)
		return a.pos > b.pos;
	return a.m < b.m;
}

int main() {
	int n, k, x;
	cin >> n >> k;
	struct Data a[k+1];
	for(int i = 0; i <= k; i++) {
		a[i].pos = i;
		a[i].m = 0;
	}
	for(int i = 0; i < n; i++) {
		cin >> x;
		a[x].m++;
	}
	sort(a + 1, a + k + 1, cmp);
	int tmp = k;
	while(a[tmp].m == a[k].m && tmp > 0) {
		tmp--;
	}
	if(tmp == 0 || a[tmp].m == 0) {
		cout << "NONE" << endl;
	}else {
		cout << a[tmp].pos << endl;
	}
}
