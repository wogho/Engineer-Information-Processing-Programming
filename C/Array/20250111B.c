// 다음 C언어 코드의 출력 결과를 쓰시오.
// 동적 2차원 배열, 인덱스 매핑, 누적 합

#include <stdio.h>
#include <stdlib.h>

void set(int **arr, int *data, int rows, int cols) {
    int i;
    for (i = 0; i < rows * cols; ++i) {
        arr[((i + 1) / rows) % rows][(i + 1) % cols] = data[i];
    }
}

int main(void) {
    int rows = 3, cols = 3, sum = 0;
    int i;
    int **arr;
    int data[] = {5, 2, 7, 4, 1, 8, 3, 6, 9};

    arr = (int **)malloc(sizeof(int *) * rows);
    for (i = 0; i < cols; i++) {
        arr[i] = (int *)malloc(sizeof(int) * cols);
    }

    set(arr, data, rows, cols);
    for (i = 0; i < rows * cols; i++) {
        sum += arr[i / rows][i % cols] * (i % 2 == 0 ? 1 : -1);
    }

    for (i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);
    printf("%d", sum);
    return 0;
}
