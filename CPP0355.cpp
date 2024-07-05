#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	for(int i = 0; i < s.size(); i++) {
		s[i] = tolower(s[i]);
	}
	stringstream ss(s);
	string tmp;
	int count = 0;
	while(ss >> tmp) {
		count++;
		int endIndex = tmp.size() - 1;
		for(int i = 0; i < tmp.size(); i++) {
			if(tmp[i] == '.' || tmp[i] == '?' || tmp[i] == '!') {
				tmp[i] = ' ';
				count = 0;
			}
		}
		if(count == 1) {
			tmp[0] = toupper(tmp[0]);
		}
		while (endIndex >= 0 && tmp[endIndex] == ' ') {
            endIndex--;
        }
        tmp = tmp.substr(0, endIndex + 1);
		cout << tmp + " ";
		if (count == 0) {
            cout << endl;
        }
	}
}
