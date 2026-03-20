// 다음 C언어 코드의 출력 결과를 쓰시오.
// 이중 포인터, 배열 원소 갱신

#include <stdio.h>

void func(int **arr, int size) {
    int i;
    for (i = 0; i < size; i++) {
        *(*arr + i) = (*(*arr + i) + i) % size;
    }
}

int main(void) {
    int arr[] = {3, 1, 4, 1, 5};
    int *p = arr;
    int **pp = &p;

    func(pp, 5);
    printf("%d", arr[2]);
    return 0;
}
