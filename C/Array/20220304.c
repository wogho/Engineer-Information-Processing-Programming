// 4. 아래 코드에 대한 출력 값을 작성하시오.
// 1차원 배열, 순위 계산(중첩 반복문)

#include <stdio.h>

int main(void) {
    int result[5];
    int arr[5] = {77, 32, 10, 99, 50};

    for (int i = 0; i < 5; i++) {
        result[i] = 1;
        for (int j = 0; j < 5; j++) {
            if (arr[i] < arr[j]) result[i]++;
        }
    }

    for (int k = 0; k < 5; k++) {
        printf("%d", result[k]);
    }

    return 0;
}
