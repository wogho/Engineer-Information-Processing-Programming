// 18. 다음 코드는 선택정렬 구현에 관한 문제이다. 오름차순 정렬 빈칸 연산자를 작성하시오.
// 선택 정렬, 배열 교환(빈칸 문제)
// 보기: <, <=, =>, >, ==, /, %

#include <stdio.h>

int main(void) {
    int E[] = {64, 25, 12, 22, 11};
    int n = sizeof(E) / sizeof(E[0]);
    int i = 0;

    do {
        int j = i + 1;
        do {
            if (E[i] (     ) E[j]) {
                int tmp = E[i];
                E[i] = E[j];
                E[j] = tmp;
            }
            j++;
        } while (j < n);
        i++;
    } while (i < n - 1);

    for (int k = 0; k <= 4; k++)
        printf("%d ", E[k]);

    return 0;
}
