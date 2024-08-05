#include <stdio.h>
#include <math.h>

/// Hàm tính S(n) = 1 + 2 + 3 + ... + n (Đệ quy)
int sum_recursive(int n) {
    if (n == 1) {
        return 1;
    }
    return n + sum_recursive(n - 1);
}

// Hàm tính S(n) = 1 + 2 + 3 + ... + n (Khử đệ quy)
int sum_iterative(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}//

// Hàm tính S(n) = 5 + √5 + √(5 + √5 + ...) có n dấu căn (Đệ quy)
double nested_sqrt_recursive(int n) {
    if (n == 0) {
        return 5;
    }
    return sqrt(5 + nested_sqrt_recursive(n - 1));
}

// Hàm tính S(n) = 1/2 + 2/3 + 3/4 + ... + n/(n + 1) (Khử đệ quy)
double fraction_sum_iterative(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += (double)i / (i + 1);
    }
    return sum;
}

// Hàm tính S(n) = 1 + 1/3 + 1/5 + ... + 1/(2n + 1) (Khử đệ quy)
double odd_fraction_sum_iterative(int n) {
    double sum = 0.0;
    for (int i = 0; i <= n; i++) {
        sum += 1.0 / (2 * i + 1);
    }
    return sum;
}

// Hàm tính S(n) = 1.2 + 2.3 + 3.4 + ... + n(n+1) (Khử đệ quy)
int product_sum_iterative(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i * (i + 1);
    }
    return sum;
}

// Hàm tính S(n) = 1*2!/(2+√3) + 2*3!/(3+√4) + ... + n(n+1)!/(n+1+√(n+2)) (Khử đệ quy)
double complex_sum_iterative(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        double factorial = 1.0;
        for (int j = 1; j <= i + 1; j++) {
            factorial *= j;
        }
        sum += (i * factorial) / (i + 1 + sqrt(i + 2));
    }
    return sum;
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf_s("%d", &n);

    // Tính các biểu thức theo yêu cầu
    printf("S(n) = 1 + 2 + 3 + ... + n (de quy): %d\n", sum_recursive(n));
    printf("S(n) = 1 + 2 + 3 + ... + n (khu de quy): %d\n", sum_iterative(n));
    printf("S(n) = 5 + √5 + √(5 + √5 + ...) co n dau can (de quy): %lf\n", nested_sqrt_recursive(n));
    printf("S(n) = 1/2 + 2/3 + 3/4 + ... + n/(n+1) (khu de quy): %lf\n", fraction_sum_iterative(n));
    printf("S(n) = 1 + 1/3 + 1/5 + ... + 1/(2n + 1) (khu de quy): %lf\n", odd_fraction_sum_iterative(n));
    printf("S(n) = 1.2 + 2.3 + 3.4 + ... + n(n+1) (khu de quy): %d\n", product_sum_iterative(n));
    printf("S(n) = 1*2!/(2+√3) + 2*3!/(3+√4) + ... + n(n+1)!/(n+1+√(n+2)) (khu de quy): %lf\n", complex_sum_iterative(n));

    return 0;
}
