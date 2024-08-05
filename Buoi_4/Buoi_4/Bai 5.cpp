#include <stdio.h>

// Hàm đệ quy tính x_n
int sequence_x(int n) {
    if (n == 0) {
        return 1;
    }
    else if (n == 1) {
        return 2;
    }
    else {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += (n - i) * sequence_x(i);
        }
        return sum;
    }
}

int main() {
    int n;
    printf("Nhap chi so phan tu n: ");
    scanf_s("%d", &n);

    printf("Gia tri phan tu thu %d cua day x la: %d\n", n, sequence_x(n));

    return 0;
}
