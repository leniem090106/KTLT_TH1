#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    const int loai1 = 0;
    const int loai2 = 180;
    const int loai3 = 900;

    while (T--) {
        int N, M, K;
        scanf("%d %d %d", &N, &M, &K);

        if (N > loai1) { // không có lo?i 1 nào
            printf("NO\n");
        } else if (M > loai2) { // vu?t quá s? lo?i 2
            printf("NO\n");
        } else if (K > loai3 - M - N) { // vu?t quá s? lo?i 3 còn l?i
            printf("NO\n");
        } else {
            printf("YES\n");
        }
    }

    return 0;
}

