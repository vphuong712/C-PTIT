#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		double x1;
		double y1;
		double x2;
		double y2;
		double d;
		cin >> x1 >> y1 >> x2 >> y2;
		d = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
		cout << setprecision(4) << fixed << d << endl;
	}
}
