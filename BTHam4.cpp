#include <stdio.h>

float tinhTienTietKiem(float tg, float ls, int th) {
    int i;
    for (i = 1; i <= th; i++) {
        tg = tg + tg * ls / 100; // C?ng lãi vào ti?n g?c m?i tháng
    }
    return tg;
}

int main() {
    float tg, ls;
    int th;

    printf("Nhap so tien gui: ");
    scanf("%f", &tg);
    printf("Nhap lai suat 1 thang (%%): ");
    scanf("%f", &ls);
    printf("Nhap so thang gui: ");
    scanf("%d", &th);

    float ketqua = tinhTienTietKiem(tg, ls, th);
    printf("So tien nhan duoc sau %d thang la: %.2f\n", th, ketqua);

    return 0;
}

