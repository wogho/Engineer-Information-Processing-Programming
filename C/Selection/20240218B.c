// 다음 C언어 코드의 출력 결과를 쓰시오.
// 값 전달 swap, switch fall-through

#include <stdio.h>

void swap(int a, int b) {
    int t = a;
    a = b;
    b = t;
}

int main(void) {
    int a = 11;
    int b = 19;
    swap(a, b);
    switch (a) {
        case 19:
            b += 1;
        case 11:
            b += 2;
        default:
            b += 3;
    }
    printf("%d", a - b);
    return 0;
}
