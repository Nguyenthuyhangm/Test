#include <iostream>
using namespace std;

int main() {
    int nThuong, nVIP, age;
    long long total = 0, pay = 0;
    cout << "Nhap so ve thuong (0-100): ";
    cin >> nThuong;
    cout << "Nhap so ve VIP (0-100): ";
    cin >> nVIP;
    cout << "Nhap tuoi nguoi mua: ";
    cin >> age;

    // Tính tổng tiền
    total = nThuong * 100000 + nVIP * 150000;
    // Kiểm tra giảm giá
    if (age <= 14 || age >= 65) {
        pay = total / 2; // giảm 50%
    } else {
        pay = total;
    }
    cout << "So tien can tra: " << pay << " VND" << endl;
    return 0;
}

