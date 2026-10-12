#include <stdio.h>
#include<string.h>
#include <math.h>

int laTamGiac(float a, float b, float c) {
    if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a)
        return 1;
    return 0;
}

float dienTichTamGiac(float a, float b, float c) {
    float p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

void phanLoaiTamGiac(float a, float b, float c) {
    if (!laTamGiac(a, b, c)) {
        printf("Ba canh khong tao thanh tam giac.\n");
        return;
    }
    float a2 = a * a, b2 = b * b, c2 = c * c;

    if (a == b && b == c) {
        printf("Day la tam giac deu.\n");
    }
    else if ((a == b && a2 + b2 == c2) ||
             (a == c && a2 + c2 == b2) ||
             (b == c && b2 + c2 == a2)) {
        printf("Day la tam giac vuong can.\n");
    }

    else if (a2 + b2 == c2 || a2 + c2 == b2 || b2 + c2 == a2) {
        printf("Day la tam giac vuong.\n");
    }
    else if (a == b || a == c || b == c) {
        printf("Day la tam giac can.\n");
    }

    else {
        printf("Day la tam giac thuong.\n");
    }
    printf("Dien tich tam giac la: %.3f\n", dienTichTamGiac(a, b, c));
}

int main() {
    float a, b, c;
    printf("Nhap 3 canh a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    phanLoaiTamGiac(a, b, c);
    return 0;
}

