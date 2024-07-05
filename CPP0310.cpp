#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string num_1, num_2;
		cin >> num_1 >> num_2;
		string res_1 = num_1, res_2 = num_2;
		long long sum_1 = 0, sum_2 = 0, x = 0, y = 0;
		for(int i = 0; i < num_1.size(); i++) {
			if(num_1[i] == '6') {
				num_1[i] = '5';
			}
			sum_1 = sum_1 * 10 + (num_1[i] - '0');
		}
		for(int i = 0; i < num_2.size(); i++) {
			if(num_2[i] == '6') {
				num_2[i] = '5';
			}
			sum_2 = sum_2 * 10 + (num_2[i] - '0');
		}
		for(int i = 0; i < res_1.size(); i++) {
			if(res_1[i] == '5') {
				res_1[i] = '6';
			}
			x = x * 10 + (res_1[i] - '0');
		}
		for(int i = 0; i < res_2.size(); i++) {
			if(res_2[i] == '5') {
				res_2[i] = '6';
			}
			y = y * 10 + (res_2[i] - '0');
		}
		cout << sum_1 + sum_2 << " " << x + y << endl;
	}
}
