// 다음 C언어 코드의 출력 결과를 쓰시오.
// 구조체 계좌, 함수 호출과 복리 계산

#include <stdio.h>

typedef struct {
    int acc;
    double bal;
} Acc;

double fn(double b, int y) {
    int i;
    double r = 1.0;
    for (i = 0; i < y; i++) {
        r = r * b;
    }
    return r;
}

void init(Acc *a, int x, double y) {
    a->acc = x;
    a->bal = y;
}

void A(Acc *a, double en) {
    if (en > 0 && en < a->bal) {
        a->bal = a->bal - en;
    } else {
        a->bal = a->bal + en;
    }
}

void B(Acc *a) {
    a->bal = a->bal * fn((1 + 0.1), 3);
}

int main(void) {
    Acc ba;
    init(&ba, 9981, 2200.0);
    A(&ba, 100.0);
    B(&ba);
    printf("%d and %.2f", ba.acc, ba.bal);
    return 0;
}
