#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long a[n], b[n] = {};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = -1;
        }
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (j == a[i])
                    b[j] = j;
        for (int i = 0; i < n; i++)
            cout << b[i] << " ";
        cout << endl;
    }
}
