#include <iostream>
#include <string>
using namespace std;

bool isTooLong(string s) {
    return s.size() > 10;
}

string findAbb(string s) {
    return s;
}

int main() {

    int n;
    string s;
    cin >> n;
    getline(cin, s);
    for (int i = 0; i < n; i++) {
        getline(cin, s);
        if (!isTooLong(s))
            cout << s << "\n";
        else
            cout << s[0] << s.size()-2 << s[s.size()-1] << "\n";
    }

    return 0;
}

