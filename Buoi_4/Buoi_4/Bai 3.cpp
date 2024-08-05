#include <stdio.h>

// Hàm đệ quy tìm giá trị phần tử thứ n của cấp số cộng
int arithmetic_sequence_recursive(int a, int r, int n) {
    if (n == 1) {
        return a;
    }
    return arithmetic_sequence_recursive(a, r, n - 1) + r;
}

int main() {
    int a, r, n;
    printf("Nhap gia tri hang dau a: ");
    scanf_s("%d", &a);
    printf("Nhap gia tri cong sai r: ");
    scanf_s("%d", &r);
    printf("Nhap chi so phan tu n: ");
    scanf_s("%d", &n);

    printf("Gia tri phan tu thu %d cua cap so cong la: %d\n", n, arithmetic_sequence_recursive(a, r, n));

    return 0;
}
