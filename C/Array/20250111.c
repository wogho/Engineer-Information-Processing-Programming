// 11. 다음은 C언어에 대한 문제이다. 아래 코드를 확인하여 알맞는 출력값을 작성하시오.
// 동적 2차원 배열, 인덱스 매핑, 누적 합

#include <stdio.h>
#include <stdlib.h>

void set(int **arr, int *data, int rows, int cols) {
    for (int i = 0; i < rows * cols; ++i) {
        arr[((i + 1) / rows) % rows][(i + 1) % cols] = data[i];
    }
}

int main(void) {
    int rows = 3, cols = 3, sum = 0;
    int data[] = {5, 2, 7, 4, 1, 8, 3, 6, 9};
    int **arr;
    arr = (int **)malloc(sizeof(int *) * rows);
    for (int i = 0; i < cols; i++) {
        arr[i] = (int *)malloc(sizeof(int) * cols);
    }

    set(arr, data, rows, cols);

    for (int i = 0; i < rows * cols; i++) {
        sum += arr[i / rows][i % cols] * (i % 2 == 0 ? 1 : -1);
    }

    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);

    printf("%d", sum);
    return 0;
}
