#include <stdio.h>

// Hàm đệ quy tính số Fibonacci thứ n
int fibonacci(int n) {
    if (n <= 2) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Nhap chi so phan tu n: ");
    scanf_s("%d", &n);

    printf("So Fibonacci thu %d la: %d\n", n, fibonacci(n));

    return 0;
}
