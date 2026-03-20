// 12. 다음 C언어에 대한 알맞는 출력값을 쓰시오.
// 포인터 배열, 이중 역참조

#include <stdio.h>

int main(void) {
    int *arr[3];
    int a = 12, b = 24, c = 36;
    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;

    printf("%d\n", *arr[1] + **arr + 1);
    return 0;
}
