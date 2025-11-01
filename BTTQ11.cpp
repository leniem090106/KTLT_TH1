#include <stdio.h>

void tinhTienThua(int giaSanPham, int tienNguoiMua) {
    int tienThua = tienNguoiMua - giaSanPham;

    printf("change = %d", tienThua);

    if (tienThua < 0) {
        printf(" cannot be returned\n");
        return;
    }

    int found = 0;
    for (int soTo10 = tienThua / 10; soTo10 >= 0 && !found; soTo10--) {
        for (int soTo5 = 0; soTo5 < 2 && !found; soTo5++) {
            for (int soTo1 = 0; soTo1 < 5 && !found; soTo1++) {
                if (10 * soTo10 + 5 * soTo5 + soTo1 == tienThua) {
                    printf(" = %d * 10 + %d * 5 + %d * 1\n", soTo10, soTo5, soTo1);
                    found = 1;
                }
            }
        }
    }

    if (!found)
        printf(" cannot be returned\n");
}

int main() {
    int soBoTest;
    scanf("%d", &soBoTest);

    for (int i = 0; i < soBoTest; i++) {
        int giaSanPham, tienNguoiMua;
        scanf("%d %d", &giaSanPham, &tienNguoiMua);
        tinhTienThua(giaSanPham, tienNguoiMua);
    }

    return 0;
}

