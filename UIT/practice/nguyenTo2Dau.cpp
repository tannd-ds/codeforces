/*
Có một vài số nguyên tố khi viết đảo lại nó cũng là số nguyên tố. Ví dụ như 17 hay 71 đều là số nguyên tố. 
Cho hai số a và b hãy tìm xem có bao nhiêu số x nằm trong đoạn [a, b] sao cho khi viết xuôi hay viết đảo số đó 
đều là số nguyên tố.
*/
#include <bits/stdc++.h>

using namespace std;

// Prototype
int reverse(int x);
bool isPrime(int x);
int count2Prime(int start, int stop);

int main() {
    int start, stop;
    cin >> start >> stop;
    cout << count2Prime(start, stop);
    cout << "Execution time: " << clock() << "\n";
    return 0;
}

int reverse(int x) {
    int reverse = 0;
    while (x != 0) {
        reverse = reverse*10 + (x % 10);
        x /= 10;
    }
    return reverse;
}

bool isPrime(int x) {
    if (x == 2 || x == 3) return true;
    if (x % 2 == 0 || x % 3 == 0 || x ==1) return false;
    for (int i=2; i*i<=x; i++)                              // This (i*i <= x) instead of (i <= sqrt(x)) is mind-blowing :(( 
        if (x % i == 0) return false;
    return true;
}

int count2Prime(int start, int stop) {
    int cnt = 0;
    for (int i=start; i<=stop; i++) 
        if (isPrime(i) && isPrime(reverse(i))) cnt++;
    return cnt;
}