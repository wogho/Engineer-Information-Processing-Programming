// 13. 다음은 C언어에 대한 문제이다. 아래 코드를 확인하여 알맞는 출력값을 작성하시오.
// 2차원 배열 포인터, 포인터 배열 접근

#include <stdio.h>

int main(void) {
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *parr[2] = {arr[1], arr[2]};
    printf("%d", parr[1][1] + *(parr[1] + 2) + **parr);

    return 0;
}
