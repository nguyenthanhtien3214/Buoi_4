#include <stdio.h>

// Hàm đệ quy tính số Fibonacci thứ n
int fibonacci(int n) {
    if (n <= 2) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Hàm xuất dãy số Fibonacci mà giá trị các số nhỏ hơn m
void print_fibonacci_less_than_m(int m) {
    int n = 1;
    int fib;

    while (1) {
        fib = fibonacci(n);
        if (fib >= m) {
            break;
        }
        printf("%d ", fib);
        n++;
    }
    printf("\n");
}

int main() {
    int m;
    printf("Nhap gia tri m: ");
    scanf_s("%d", &m);

    printf("Day so Fibonacci co gia tri nho hon %d la: ", m);
    print_fibonacci_less_than_m(m);

    return 0;
}
