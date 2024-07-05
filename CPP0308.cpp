#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string str;
		cin >> str;
		map<char, int> m;
		for(int i = 0; i < str.size(); i++) {
			m[str[i]]++;
		}
        for (int i = 0; i < str.size(); i++) {
            if (m[str[i]] == 1)
                cout << str[i];
        }
		cout << endl;
	}
}
