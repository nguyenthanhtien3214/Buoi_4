#include <stdio.h>

// Hàm tìm UCLN theo phương pháp đệ quy
int gcd(int a, int b) {
    if (a == b) {
        return a;
    }
    else if (a > b) {
        return gcd(a - b, b);
    }
    else {
        return gcd(a, b - a);
    }
}

int main() {
    int a, b;
    printf("Nhap hai so nguyen duong a va b: ");
    scanf_s("%d %d", &a, &b);

    printf("UCLN cua %d va %d la: %d\n", a, b, gcd(a, b));

    return 0;
}
