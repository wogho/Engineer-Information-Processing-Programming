// 다음은 선택정렬 코드이다. 밑줄에 알맞은 코드를 쓰시오.
// 선택 정렬, 비교 연산자(빈칸 문제)
// 보기: 없음
// 예시 출력값: 11 12 22 25 64

#include <stdio.h>

int main(void) {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 0, j, tmp;
    do {
        j = i + 1;
        do {
            if (arr[i] _____ arr[j]) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
            j++;
        } while (j < n);
        i++;
    } while (i < n - 1);
    for (i = 0; i <= 4; i++)
        printf("%d ", arr[i]);
    return 0;
}
