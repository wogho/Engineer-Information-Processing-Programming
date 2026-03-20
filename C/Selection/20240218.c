// 18. 다음은 C언어에 대한 문제이다. 아래 코드를 확인하여 알맞은 출력 값을 작성하시오.
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
        case 1:
            b += 1;
        case 11:
            b += 2;
        default:
            b += 3;
            break;
    }

    printf("%d", a - b);
    return 0;
}
