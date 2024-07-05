#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n;
		cin >> n;
		string str = to_string(n);
		string result = "";
		regex pattern("084");
		if(regex_search(str, pattern)) {
			result = regex_replace(str, pattern, "");
		}
		cout << result << endl;
	}
}
