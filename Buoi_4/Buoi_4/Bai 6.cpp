#include <stdio.h>

// Hàm đệ quy đếm số chữ số của một số nguyên dương
int count_digits(int n) {
    if (n == 0) {
        return 0;
    }
    return 1 + count_digits(n / 10);
}

int main() {
    int n;
    printf("Nhap mot so nguyen duong n: ");
    scanf_s("%d", &n);

    // Kiểm tra nếu n là 0 thì số chữ số là 1
    if (n == 0) {
        printf("So chu so cua %d la: 1\n", n);
    }
    else {
        printf("So chu so cua %d la: %d\n", n, count_digits(n));
    }

    return 0;
}
