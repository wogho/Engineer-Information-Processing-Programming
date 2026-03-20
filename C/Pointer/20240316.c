// 16. 다음은 C언어에 대한 문제이다. 아래 코드를 확인하여 알맞는 출력값을 작성하시오.
// 이중 포인터, 배열 원소 갱신

#include <stdio.h>

void func(int **arr, int size) {
    for (int i = 0; i < size; i++) {
        *(*arr + i) = (*(*arr + i) + i) % size;
    }
}

int main(void) {
    int arr[] = {3, 1, 4, 1, 5};
    int *p = arr;
    int **pp = &p;
    int num = 6;

    func(pp, 5);
    num = arr[2];
    printf("%d", num);

    return 0;
}
