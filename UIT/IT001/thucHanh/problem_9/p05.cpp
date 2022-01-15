
#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std;

struct SinhVien {
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};

int myStrlen(char s[], int k) {
    int len = k;
    while(s[len] != '\0' && s[len] != '\n') len++;
    return len-k;
}

void Nhap(SinhVien &A) {
	fflush(stdin);
	fgets(A.MASV,10,stdin);
	fgets(A.HoTen, 100, stdin);
	fgets(A.NgaySinh, 12, stdin);
	cin >> A.GioiTinh;
	cin >> A.DiemToan >> A.DiemLy >> A.DiemHoa;

	A.MASV[myStrlen(A.MASV, 0)] = '\0';
	A.HoTen[myStrlen(A.HoTen, 0)] = '\0';
	A.NgaySinh[myStrlen(A.NgaySinh, 0)] = '\0';
}

void Xuat(SinhVien A) {
	cout << A.MASV << "\t";
	cout << A.HoTen << "\t";
	cout << A.NgaySinh << "\t";
	cout << A.GioiTinh << "\t";
	cout << setprecision(3) << A.DiemToan << "\t";
	cout << setprecision(3) << A.DiemLy << "\t";
	cout << setprecision(3) << A.DiemHoa << "\t";
	A.DTB = (A.DiemToan + A.DiemLy + A.DiemHoa)/3;
	cout << setprecision(3) << A.DTB;

}

int main() {
    SinhVien A;
    Nhap(A);
    Xuat(A);
    return 0;
}

