
#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std;
#define MAXN 100

struct SinhVien {
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};

#include <cstring>

int myStrlen(char s[], int k) {
    int len = k;
    while(s[len] != '\0' && s[len] != '\n') len++;
    return len-k;
}

void Nhap_1(SinhVien &A) {
    fflush(stdin);
    fgets(A.MASV,10, stdin);
    fflush(stdin);
    fgets(A.HoTen, 100, stdin);
    fflush(stdin);
    fgets(A.NgaySinh, 12, stdin);
    cin >> A.GioiTinh;
    cin >> A.DiemToan >> A.DiemLy >> A.DiemHoa;

    A.MASV[myStrlen(A.MASV, 0)] = '\0';
    A.HoTen[myStrlen(A.HoTen, 0)] = '\0';
    A.NgaySinh[myStrlen(A.NgaySinh, 0)] = '\0';
}

void Nhap(SinhVien A[MAXN], int &n) {
    char foo[101];
    cin >> n;
    fgets(foo, 101, stdin);
    for (int i = 0; i < n; i++) {
        Nhap_1(A[i]);
        fgets(foo, 101, stdin);
    }
}

void Nhap(char s[100]) {
	fflush(stdin);
    fgets(s, 100, stdin);
	s[myStrlen(s, 0)] = '\0';

}

void Xuat_1(SinhVien A) {
    cout << A.MASV << "\t";
    cout << A.HoTen << "\t";
    cout << A.NgaySinh << "\t";
    cout << A.GioiTinh << "\t";
    cout << setprecision(3) << A.DiemToan << "\t";
    cout << setprecision(3) << A.DiemLy << "\t";
    cout << setprecision(3) << A.DiemHoa << "\t";
    A.DTB = (A.DiemToan + A.DiemLy + A.DiemHoa)/3;
    cout << setprecision(3) << A.DTB << "\n";

}

void Xuat(SinhVien A[MAXN], int n) {
    for (int i = 0; i < n; i++) {
        Xuat_1(A[i]);
    }
}

void XoaTheoHoTen(SinhVien A[MAXN], int &n, char hoTenCanXoa[100]) {
	int i = 0;
	while (i < n) {
		while (strcmp(A[i].HoTen, hoTenCanXoa) == 0) {
			for (int j = i; j < n; j++) {
				A[j] = A[j+1];
			}
			n--;
		}
		i++;
	}
}

int main() {
    SinhVien A[MAXN];
    char hoTenCanXoa[100];
    int n;

    Nhap(hoTenCanXoa);

    Nhap(A, n);

    XoaTheoHoTen(A, n, hoTenCanXoa);

    Xuat(A, n);
    return 0;
}

