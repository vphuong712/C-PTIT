#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
        int MAX = -1e6;
        int MIN = 1e6;
        for (int i = 0; i < n; i++) {
            if (a[i] > MAX)
                MAX = a[i];
        }
        for (int i = 0; i < m; i++) {
            if (b[i] < MIN)
                MIN = b[i];
        }
        long long r = (long long)MIN * MAX;
        cout << r << endl;
    }
}
