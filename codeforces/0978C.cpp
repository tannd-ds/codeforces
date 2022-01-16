#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    vector<unsigned long long> a, b;
    cin >> n >> m;
    a.push_back(0);
    b.push_back(0);
	unsigned long long tmp;
    for  (int i = 1; i <= n; i++) {
        cin >> tmp;
        a.push_back(a[i-1] + tmp);
    }
    for (int i = 1; i <= m; i++) {
        cin >> tmp;
        b.push_back(tmp);
    }
	int j = 0;
    for (int i = 1; i <= m; i++) {
        while (b[i] > a[j]) j++;
        cout << j << " " << b[i] - a[j-1] << "\n";
    }
}
