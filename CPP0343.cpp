#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string str;
		getline(cin, str);
		stringstream ss(str);
		string tmp;
		int sum_c = 0, sum_l = 0;
		int count = 0;
		while(ss >> tmp) {
			count++;
			if((tmp[tmp.size() - 1] - '0') % 2 == 0) {
				sum_c++;
			} else {
				sum_l++;
			}
		}
		if(sum_c > sum_l && count % 2 == 0) {
			cout << "YES" << endl;
		} else if (sum_c < sum_l && count % 2 != 0) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}
