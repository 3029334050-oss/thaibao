#include <stdio.h>

// Hàm nhập dãy số
void nhapDaySo(int a[], int n);

// Hàm xuất dãy số
void xuatDaySo(int a[], int n);

// Hàm sắp xếp dãy số tăng dần (Sử dụng thuật toán Interchange Sort)
void sapXepTangDan(int a[], int n);

// Hàm đếm số phần tử chẵn
int demSoChan(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}
// Hàm main điều khiển chương trình
int main()
{

  return 0;
}
