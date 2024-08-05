#include <stdio.h>

// Hàm đệ quy tính A_n của dãy a
int sequence_a(int n) {
    if (n == 0) {
        return 1;
    }
    else if (n == 1) {
        return 0;
    }
    else if (n == 2) {
        return -1;
    }
    else {
        return 2 * sequence_a(n - 1) - 3 * sequence_a(n - 2) - sequence_a(n - 3);
    }
}

// Hàm đệ quy tính A_n của dãy b
int sequence_b(int n) {
    if (n == 1) {
        return 1;
    }
    else if (n == 2) {
        return 2;
    }
    else if (n == 3) {
        return 3;
    }
    else {
        return 2 * sequence_b(n - 1) + sequence_b(n - 2) - 3 * sequence_b(n - 3);
    }
}

int main() {
    int n;
    printf("Nhap chi so phan tu n: ");
    scanf_s("%d", &n);

    printf("Gia tri phan tu thu %d cua day a la: %d\n", n, sequence_a(n));
    printf("Gia tri phan tu thu %d cua day b la: %d\n", n, sequence_b(n));

    return 0;
}
